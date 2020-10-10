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
//#include "GlobalVariables.h"
#include "Patterns.h"
#include "GlobalVariables.h"

CY_ISR(Custom_BUTTON_ISR)
{
    
    if (count_press_button == MAX_PATTERN) {
        count_press_button = 0;
    }
    else if (count_press_button == 0) {
        SetPattern(primo);
    }
    else if (count_press_button == 1) {
        SetPattern(secondo);
    }
    else if (count_press_button == 2) {
        SetPattern(terzo);
    }
    else if (count_press_button == 3) {
        SetPattern(quarto);
    }
    else if (count_press_button == 4) {
        SetPattern(quinto);
    }
    else if (count_press_button == 5) {
        SetPattern(sesto);
    }
    else if (count_press_button == 6) {
        SetPattern(settimo);
    }
    else {
        count_press_button++;
    }
    
    
    /*
    if (count_press_button == MAX_PATTERN) {
        count_press_button = 0;
    }
    else {
        count_press_button ++;
    }
    */
    
        
}

/* [] END OF FILE */
