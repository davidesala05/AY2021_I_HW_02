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

 // Include header
#include "InterruptRoutines.h"


  // Include required header files
#include "PatternsDefinition.h"
#include "GlobalVariables.h"
#include "project.h"

CY_ISR(Custom_BUTTON_ISR)
{
    count_press_button++;
    if (count_press_button > MAX_PATTERN) {
        count_press_button = 1;
    }
    if (count_press_button == 1) {
        SetPattern(primo);
    }
    else if (count_press_button == 2) {
        SetPattern(secondo);
    }
    else if (count_press_button == 3) {
        SetPattern(terzo);
    }
    else if (count_press_button == 4) {
        SetPattern(quarto);
    }
    else if (count_press_button == 5) {
        SetPattern(quinto);
    }
    else if (count_press_button == 6) {
        SetPattern(sesto);
    }
    else if (count_press_button == 7) {
        SetPattern(settimo);
    }
    PWM_red_Start();
    PWM_green_Start();
    
}

/* [] END OF FILE */
