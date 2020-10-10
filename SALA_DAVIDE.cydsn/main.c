/* ========================================
 *
 * DAVIDE SALA
 * SECOND ASSIGNMENT
 * 
 * ========================================
*/
#include "InterruptRoutines.h"
#include "project.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    /* Place your initialization/startup code here */
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    
    for(;;)
    {
  
    }
}

/* [] END OF FILE */
