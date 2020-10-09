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
#include "PatternDriver.h"
#include "PWM_red.h"
#include "PWM_green.h"

void SetPattern (pattern p) {
    
    PWM_red_WriteCounter(p.start_count_red);
    PWM_red_WritePeriod(p.period_red);
    PWM_red_WriteCompare(p.DC_red);
    PWM_green_WriteCounter(p.start_count_green);
    PWM_green_WritePeriod(p.period_green);
    PWM_green_WriteCompare(p.DC_green);
}

/* [] END OF FILE */
