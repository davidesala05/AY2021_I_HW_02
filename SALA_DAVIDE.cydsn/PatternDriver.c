/* ========================================
 *
 * That is the fucntion that change the parameters of the PWM for both the colours
 * The parameters are:
 * -- start_count_[color] : is the starting value for the counter in the PWM,
 *                          is initialized equal to the period if the pattern starts high (with no phase change)
 *                          is then used to change the phases in the patterns that required to start with a low value
 * -- period_[color] : is the parameter used to define the period of the PWM
 * -- DC_[color] : used to set the duty cyle of the PWM
 * 
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
