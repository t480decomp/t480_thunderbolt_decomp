import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.disassemble.Disassembler;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class Decomp8051Fill extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        String out = a[0];
        String symPath = a.length > 1 ? a[1] : null;
        String idxPath = a.length > 2 ? a[2] : null;
        String seedsPath = a.length > 3 ? a[3] : null;
        java.util.List<Address> extraSeeds = new java.util.ArrayList<>();
        if (seedsPath != null) {
            BufferedReader sbr = new BufferedReader(new FileReader(seedsPath));
            String sline;
            while ((sline = sbr.readLine()) != null) {
                sline = sline.trim();
                if (sline.isEmpty()) continue;
                extraSeeds.add(addr(Long.decode("0x" + sline)));
            }
            sbr.close();
        }

        for (AddressSpace sp : currentProgram.getAddressFactory().getAddressSpaces()) {
            println("SPACE " + sp.getName() + " size=" + sp.getSize());
        }

        Disassembler d1 = Disassembler.getDisassembler(currentProgram, monitor, null);
        d1.disassemble(addr(0x0000), null, true);
        Disassembler d2 = Disassembler.getDisassembler(currentProgram, monitor, null);
        d2.disassemble(addr(0x0200), null, true);
        for (Address s : extraSeeds) {
            Disassembler ds = Disassembler.getDisassembler(currentProgram, monitor, null);
            ds.disassemble(s, null, true);
        }

        // create functions at call targets
        Listing lst = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        createFunction(addr(0x0200), null);
        for (Address s : extraSeeds) {
            if (fm.getFunctionContaining(s) == null && lst.getInstructionAt(s) != null) createFunction(s, null);
        }
        int made = 0;
        for (int pass = 0; pass < 3; pass++) {
            List<Address> targets = new ArrayList<>();
            InstructionIterator it = lst.getInstructions(true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                for (Reference r : ins.getReferencesFrom()) {
                    if (r.getReferenceType().isCall() && r.getToAddress() != null) {
                        targets.add(r.getToAddress());
                    }
                }
            }
            for (Address t : targets) {
                if (fm.getFunctionContaining(t) == null) {
                    Function f = createFunction(t, null);
                    if (f != null) made++;
                }
            }
        }
        println("FUNCS_CREATED " + made);

        // apply symbol map: lines "SPACE 0xADDR NAME"
        if (symPath != null) {
            BufferedReader br = new BufferedReader(new FileReader(symPath));
            String line;
            int n = 0;
            while ((line = br.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty() || line.startsWith("#")) continue;
                String[] p = line.split("\\s+");
                if (p.length < 3) continue;
                AddressSpace sp = currentProgram.getAddressFactory().getAddressSpace(p[0]);
                if (sp == null) continue;
                Address ad = sp.getAddress(Long.decode(p[1].replace("0x", "0x")));
                try {
                    createLabel(ad, p[2], true);
                    n++;
                } catch (Exception e) {
                    println("label fail " + line + " " + e.getMessage());
                }
            }
            br.close();
            println("LABELS_APPLIED " + n);
        }

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        PrintWriter pw = new PrintWriter(out);
        PrintWriter ix = idxPath != null ? new PrintWriter(idxPath) : null;
        pw.println("/* Decompiled 8051 firmware image: " + currentProgram.getName() + " */");
        pw.println("/* language " + currentProgram.getLanguageID() + " */");
        pw.println("/* NOTE: named registers are INFERRED from access patterns; the address is authoritative. */");
        pw.println();
        int nf = 0, ok = 0;
        for (Function f : fm.getFunctions(true)) {
            nf++;
            long size = f.getBody().getNumAddresses();
            StringBuilder callers = new StringBuilder();
            for (Function c : f.getCallingFunctions(monitor)) {
                if (callers.length() > 0) callers.append(", ");
                callers.append(c.getEntryPoint());
            }
            if (ix != null) ix.println(String.format("%s size=%d name=%s callers=[%s]", f.getEntryPoint(), size, f.getName(), callers));
            pw.println("/* =========================================================");
            pw.println(" * " + f.getEntryPoint() + "  " + f.getName() + "  size=" + size);
            if (callers.length() > 0) pw.println(" * callers: " + callers);
            pw.println(" * ========================================================= */");
            DecompileResults r = di.decompileFunction(f, 45, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                pw.println(r.getDecompiledFunction().getC());
                ok++;
            } else {
                pw.println("/* DECOMPILE FAILED: " + (r == null ? "null" : r.getErrorMessage()) + " */");
            }
            pw.println();
        }
        pw.println("/* total functions=" + nf + " decompiled=" + ok + " */");
        pw.close();
        if (ix != null) { ix.println("total=" + nf + " decompiled=" + ok); ix.close(); }
        println("Decomp8051 wrote " + out + " functions=" + nf + " ok=" + ok);
    }

    private Address addr(long off) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(off);
    }
}
