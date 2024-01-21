#include <stdlib.h>
#include <kernel/interrupts.h>
#include <kernel/apic.h>
#include <kernel/errors.h>
#include <kernel/pic.h>

LOUSTATUS InitializeMainInterruptHandleing(){
    
    if(InitializeAdvancedProgramableController() != LOUSTATUS_GOOD)LouPanic("Cunstruction Panic",BAD);

    

    return 0;
}

void InvalidOpcode();

LOUSTATUS InitializeStartupInterruptHandleing(){
    
    if(SetBasicInterrupts(true) != LOUSTATUS_GOOD)LouPanic("Error Setting Basic Interrupts",BAD);
   
    Register_Device_To_Interrupt(33, PS2KeyboardHandler);
    Register_Device_To_Interrupt(6, InvalidOpcode);
    
    PIC_remap(0x20,0x20 + 8);

    UpdateIDT(true);
    Mask_All_Programable_Interrupts();
    LouPrint("Basic Interrupts Setup\n");
    
    IRQ_Pic_clear_mask(1);

    return 0;
}
