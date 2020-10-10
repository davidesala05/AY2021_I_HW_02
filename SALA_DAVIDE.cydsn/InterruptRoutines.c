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
    
    if (count_press_button > (MAX_PATTERN-1)) { //Verification of the patterns overflow, if it happens, the initialization to 1 (primo pattern) is done
        count_press_button = 0;
    }
    
    SetPattern(ALL_Patterns[count_press_button]);
    PWM_red_Start(); 
    PWM_green_Start(); // both the LEDs' PWMs are switched ON
    count_press_button++;
}

/* [] END OF FILE */
