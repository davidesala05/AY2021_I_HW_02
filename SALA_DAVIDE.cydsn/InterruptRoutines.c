/* ========================================
 *
 * This is the ISR function in which the patterns are changed
 * and loaded to the PWMs. The count variables is just to track the
 * pression of the button and performed the change in the pattern
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
    if (count_press_button > MAX_PATTERN) { //Verification of the patterns overflow, if it happens, the initialization to 1 (primo pattern) is done
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
    PWM_green_Start(); // both the LEDs' PWMs are switched ON
    
}

/* [] END OF FILE */
