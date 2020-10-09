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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        PWM_green_Start();
        PWM_red_Start();
        CyDelay(5000);
        PWM_green_WriteCounter(999);
        PWM_green_WritePeriod(999);
        PWM_green_WriteCompare(499);
    }
}

/* [] END OF FILE */
