#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>


void PageFault(){
    uint64_t RSP = get_rsp();

    LouPrint("Page Fault Detected Handleing Now\n");
    
    if(PageTableDeletion){
        
        return;
    }
    if(MemoryProbing){
     
        return;
    }
    
    if(!SeriousPageFault){
        
        return;
    }

    LouPanic("Page Fault Couldent Be Handled",BAD);
}
