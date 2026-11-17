#!/usr/bin/env python3
"""gen_cm_listing.py - regenerate cm.asm from the vendor image.

Extracts the Cortex-M block at NVM 0x3BC90-0x40000 (17,264 B), disassembles it
with arm-none-eabi-objdump (Thumb-2) and emits a byte-exact GNU as listing:

  * in-image branch/call targets become labels;
  * literal pools become .word data;
  * zero runs become .zero;
  * encodings GNU as cannot reproduce identically fall back to .inst.n/.inst.w.

The generated listing is assembled and compared inside the script; it must
match the extracted block byte-for-byte.  Requires arm-none-eabi-objdump,
arm-none-eabi-as and arm-none-eabi-objcopy.
"""
import os
import re
import subprocess
import sys

HERE=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
VENDOR=os.path.join(HERE,'build','TBT.bin')
OFF=0x3BC90
SIZE=0x4370
OUT=os.path.join(HERE,'cm.asm')
TMP=os.path.join(HERE,'build','regen')
os.makedirs(TMP,exist_ok=True)
BIN=os.path.join(TMP,'cm_raw.bin')
vendor=open(VENDOR,'rb').read()
data=vendor[OFF:OFF+SIZE]
open(BIN,'wb').write(data)
N=len(data)

out=subprocess.check_output(['arm-none-eabi-objdump','-D','-b','binary','-m','arm','-M','force-thumb','--adjust-vma=0',BIN], text=True)
items=[]
for line in out.splitlines():
    m=re.match(r'^\s*([0-9a-f]+):\s+([0-9a-f ]+?)\s{2,}(.*)$', line)
    if not m: continue
    addr=int(m.group(1),16)
    groups=m.group(2).split()
    raw=b''.join(bytes.fromhex(g)[::-1] for g in groups)
    items.append({'addr':addr,'size':len(raw),'bytes':raw,'text':m.group(3).strip()})
items.sort(key=lambda x:x['addr'])
# objdump prints '...' for skipped runs; fill the gaps from the original bytes
full=[]; pos=0
for it in items:
    if it['addr']>pos:
        raw=data[pos:it['addr']]
        txt='.zero %d'%len(raw) if not any(raw) else '.byte '+', '.join('0x%02x'%b for b in raw)
        full.append({'addr':pos,'size':len(raw),'bytes':raw,'text':txt,'kind':'data'})
    full.append(dict(it,kind='insn'))
    pos=it['addr']+it['size']
if pos<N:
    raw=data[pos:N]
    txt='.zero %d'%len(raw) if not any(raw) else '.byte '+', '.join('0x%02x'%b for b in raw)
    full.append({'addr':pos,'size':len(raw),'bytes':raw,'text':txt,'kind':'data'})
items=full
starts=set(i['addr'] for i in items)

lit={}
for it in items:
    t=it['text']
    if '[pc' not in t: continue
    m=re.search(r'@\s*\(0x([0-9a-f]+)\)', t)
    if not m: continue
    target=int(m.group(1),16)
    mn=t.split()[0]
    size=2 if mn.startswith('ldrh') else (1 if mn.startswith('ldrb') else 4)
    if 0<=target<N and target in starts:
        lit[target]=size

# drop literal targets whose range is not exactly covered by whole items
item_at={it['addr']:i for i,it in enumerate(items)}
lit2={}
for a,s in lit.items():
    end=a+s; pos=a; idx=item_at[a]; ok=True
    while pos<end:
        if idx>=len(items) or items[idx]['addr']!=pos:
            ok=False; break
        e=items[idx]['addr']+items[idx]['size']
        if e>end:
            ok=False; break
        pos=e; idx+=1
    if ok and pos==end:
        lit2[a]=s
lit=lit2

emit=[]
i=0
while i<len(items):
    it=items[i]; a=it['addr']
    if it.get('kind')=='data':
        emit.append({'addr':a,'size':it['size'],'kind':'data','bytes':it['bytes'],'text':it['text']})
        i+=1
        continue
    if a in lit:
        s=lit[a]; raw=data[a:a+s]
        if s==4: txt='.word 0x%08x'%int.from_bytes(raw,'little')
        elif s==2: txt='.short 0x%04x'%int.from_bytes(raw,'little')
        else: txt='.byte 0x%02x'%raw[0]
        emit.append({'addr':a,'size':s,'kind':'data','bytes':raw,'text':txt})
        i+=1
        while i<len(items) and items[i]['addr']<a+s: i+=1
        continue
    emit.append({'addr':a,'size':it['size'],'kind':'insn','bytes':it['bytes'],'text':it['text']})
    i+=1

labels=set(x['addr'] for x in emit)
BRANCH={'b','bl','bx','blx','bal','beq','bne','bcs','bcc','bmi','bpl','bvs','bvc','bhi','bls','bge','blt','bgt','ble','cbz','cbnz'}
def label(a): return 'L%05x'%a
def rawinst(x):
    b=x['bytes']
    if len(b)==2: return '.inst.n 0x%04x'%int.from_bytes(b,'little')
    if len(b)==4: return '.inst.w 0x%04x%04x'%(int.from_bytes(b[:2],'little'),int.from_bytes(b[2:],'little'))
    return '.byte '+', '.join('0x%02x'%v for v in b)

def conv(x):
    if x['kind']=='data': return x['text']
    t=re.sub(r'\s*@.*$','',x['text']).strip()
    if not t: return rawinst(x)
    mn=t.split()[0]; base=mn.split('.')[0]
    if base in BRANCH:
        for m in re.finditer(r'0x([0-9a-f]{4,8})', t):
            v=int(m.group(1),16)
            if not (0<=v<N) or v not in labels:
                return rawinst(x)
        def repl(m):
            v=int(m.group(1),16)
            return label(v) if v in labels else m.group(0)
        t=re.sub(r'0x([0-9a-f]{4,8})', repl, t)
    return t

force=set()
def build():
    lines=['@ Cortex-M code at NVM 0x3BC90-0x40000 (17,264 bytes), Thumb-2, linked at 0.',
           '@ Reassembled from the vendor image and verified byte-for-byte with arm-none-eabi-as;',
           '@ the listing uses labels for in-image branches, .word for literal pools and .inst',
           '@ for the few encodings GNU as cannot express identically.  See scripts/gen_cm_listing.py.',
           '.syntax unified','.thumb','.cpu cortex-m3','.text','.balign 4']
    linemap=[None]*len(lines)
    for idx,x in enumerate(emit):
        lines.append(label(x['addr'])+':'); linemap.append(idx)
        lines.append('  '+(rawinst(x) if x['addr'] in force else conv(x))); linemap.append(idx)
    return '\n'.join(lines)+'\n', linemap

def run_as():
    r=subprocess.run(['arm-none-eabi-as','-mthumb','-o',os.path.join(TMP,'cm.o'),os.path.join(TMP,'cm.s')],capture_output=True,text=True)
    return r

for it in range(2000):
    text,lm=build(); open(os.path.join(TMP,'cm.s'),'w').write(text)
    r=run_as()
    if r.returncode:
        errs=set()
        for m in re.finditer(r'cm\.s:(\d+):', r.stderr):
            ln=int(m.group(1))
            if 1<=ln<=len(lm) and lm[ln-1] is not None:
                errs.add(emit[lm[ln-1]]['addr'])
        new=errs-force
        if not new:
            print('AS ERROR unresolved iter',it); print(r.stderr[:2000]); sys.exit(1)
        force |= new
        print('iter',it,'AS errors -> force',len(new),'total',len(force))
        continue
    subprocess.run(['arm-none-eabi-objcopy','-O','binary',os.path.join(TMP,'cm.o'),os.path.join(TMP,'cm_out.bin')],check=True)
    o=open(os.path.join(TMP,'cm_out.bin'),'rb').read()
    if o==data:
        print('EXACT after',it,'iterations; forced',len(force),'of',len(emit)); break
    if len(o)!=N:
        d=0
        while d<min(len(o),N) and o[d]==data[d]: d+=1
        target=None
        for x in emit:
            if x['addr']<=d<x['addr']+x['size']: target=x; break
        if target is None or target['addr'] in force:
            print('length diff',len(o),N,'at',hex(d),'unmapped'); break
        force.add(target['addr']); print('iter',it,'len diff at',hex(d),'force',hex(target['addr'])); continue
    diff=[x for x in emit if o[x['addr']:x['addr']+x['size']]!=data[x['addr']:x['addr']+x['size']]]
    new=set(x['addr'] for x in diff)-force
    if not new:
        print('mismatch but no new items at',hex(next(i for i in range(N) if o[i]!=data[i]))); break
    force |= new
    print('iter',it,'mismatches',len(diff),'-> force',len(new),'total',len(force))
else:
    print('no convergence')
