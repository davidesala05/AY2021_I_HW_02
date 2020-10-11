/* ========================================
 *
 * That is the function that change the parameters of the PWM for both the colours
 * The explanation of the patterns follows in the PatternsDefinition.h file
 * 
 * ========================================
*/
#include "PatternDriver.h"
#include "PWM_red.h"
#include "PWM_green.h"

void SetPattern (pattern p) {
   
    PWM_red_SetCompareMode(p.mode_red);
    PWM_green_SetCompareMode(p.mode_green);
    PWM_red_WritePeriod(p.period_red);
    PWM_green_WritePeriod(p.period_green);
    PWM_red_WriteCompare(p.DC_red);
    PWM_green_WriteCompare(p.DC_green);
    PWM_red_WriteCounter(p.period_red);
    PWM_green_WriteCounter(p.period_green);
}
/* [] END OF FILE */
