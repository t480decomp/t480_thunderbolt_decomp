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

/** Decompile a flat ARM/Cortex-M image linked at 0 (used for CM_UCODE at 0x3BC90). */
public class DecompArm extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        String out = a[0];
        String idxPath = a.length > 1 ? a[1] : null;
        String seedsPath = a.length > 2 ? a[2] : null;
        List<Address> seeds = new ArrayList<>();
        seeds.add(addr(0));
        if (seedsPath != null) {
            BufferedReader br = new BufferedReader(new FileReader(seedsPath));
            String line;
            while ((line = br.readLine()) != null) {
                line = line.trim();
                if (!line.isEmpty()) seeds.add(addr(Long.decode("0x" + line)));
            }
            br.close();
        }
        for (Address s : seeds) {
            Disassembler d = Disassembler.getDisassembler(currentProgram, monitor, null);
            d.disassemble(s, null, true);
        }
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        for (Address s : seeds) {
            if (fm.getFunctionAt(s) == null && lst.getInstructionAt(s) != null) createFunction(s, null);
        }
        for (int pass = 0; pass < 6; pass++) {
            List<Address> targets = new ArrayList<>();
            InstructionIterator it = lst.getInstructions(true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                for (Reference r : ins.getReferencesFrom()) {
                    if (r.getReferenceType().isCall() && r.getToAddress() != null) {
                        Address t = r.getToAddress();
                        if (t.getAddressSpace().equals(currentProgram.getAddressFactory().getDefaultAddressSpace())) {
                            targets.add(t);
                        }
                    }
                }
            }
            int made = 0;
            for (Address t : targets) {
                if (fm.getFunctionAt(t) == null && lst.getInstructionAt(t) != null) {
                    if (createFunction(t, null) != null) made++;
                }
            }
            println("PASS " + pass + " new_functions=" + made);
            if (made == 0) break;
        }
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        PrintWriter pw = new PrintWriter(out);
        PrintWriter ix = idxPath != null ? new PrintWriter(idxPath) : null;
        pw.println("/* Decompiled ARM/Cortex-M image: " + currentProgram.getName() + " */");
        pw.println("/* language " + currentProgram.getLanguageID() + " */");
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
            if (ix != null) ix.println(String.format("%s size=%d name=%s callers=[%s]",
                    f.getEntryPoint(), size, f.getName(), callers));
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
        println("DecompArm wrote " + out + " functions=" + nf + " ok=" + ok);
    }

    private Address addr(long off) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(off);
    }
}
