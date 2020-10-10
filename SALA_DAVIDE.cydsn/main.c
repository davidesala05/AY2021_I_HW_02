/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "InterruptRoutines.h"
#include "project.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    PWM_red_Start();
    PWM_green_Start();
   
    
    for(;;)
    {
        /* Place your application code here. */
        
    }
}

/* [] END OF FILE */
