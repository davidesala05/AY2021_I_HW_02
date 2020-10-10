/* ========================================
 *
 * DAVIDE SALA
 * SECOND ASSIGNMENT
 * The program does not do anything in the main,
 * all the tasks are performed in the InterruptRoutines function
 * ========================================
*/
#include "InterruptRoutines.h"
#include "project.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    
    for(;;)
    {
        /* Place your application code here. */
        
    }
}

/* [] END OF FILE */
