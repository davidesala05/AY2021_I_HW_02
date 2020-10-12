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
#include "PatternsDefinition.h" //where the patterns are defined
#include "GlobalVariables.h" //Where the count variable is defined
#include "project.h"

CY_ISR(Custom_BUTTON_ISR)
{
    
    if (count_press_button == MAX_PATTERN) {  //Verification of the pattern vector's overflow, if it happens, the initialization to 0 (first pattern) is done
        count_press_button = 0;
    }
    
    SetPattern(ALL_Patterns[count_press_button]); //load of the new pattern
    
    count_press_button++; //increment the count to the next pattern
}

/* [] END OF FILE */
