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
#include "project.h"
#include "InterruptRoutines.h"
#include "PatternDriver.h"
#include "cytypes.h"

#define MAX_PATTERN 7

uint8_t count_press_button = 0;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    PWM_red_Start();
    PWM_green_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        
    }
}

/* [] END OF FILE */
