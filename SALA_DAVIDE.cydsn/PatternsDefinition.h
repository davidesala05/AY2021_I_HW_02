/* ========================================
 *
 * Definition of all the seven patterns used for the combinations.
 * The structure is the follow:
 * 
 *   {  uint16_t start_count_red;
 *      uint16_t period_red;
 *      uint16_t DC_red;
 *      uint16_t start_count_green;
 *      uint16_t period_green;
 *      uint16_t DC_green;
 *   }
 * 
 * All the patterns are grouped together in an array of struct
 * 
 * ========================================
*/
#ifndef __PATTERNS_H_
    #define __PATTERNS_H_
    
    #include "PatternDriver.h"
    
    /*
        In order to switch between the patterns in the easiest way,
        the patterns are grouped together in a vector of structs.
    */
    
    pattern ALL_Patterns[] = {
        
        {PWM_green__B_PWM__LESS_THAN, 1999, 0, PWM_green__B_PWM__LESS_THAN, 1999, 0},                      //first pattern
        {PWM_green__B_PWM__LESS_THAN, 1999, 0, PWM_green__B_PWM__LESS_THAN, 1999, 1000},                   //second pattern
        {PWM_green__B_PWM__GREATER_THAN_OR_EQUAL_TO, 1999, 1000, PWM_green__B_PWM__LESS_THAN, 1999, 0},    //third pattern
        {PWM_green__B_PWM__LESS_THAN, 999, 500, PWM_green__B_PWM__GREATER_THAN_OR_EQUAL_TO, 999, 500},     //fourth pattern       
        {PWM_green__B_PWM__GREATER_THAN_OR_EQUAL_TO, 499, 250, PWM_green__B_PWM__LESS_THAN, 499, 250},     //fifth pattern 
        {PWM_green__B_PWM__LESS_THAN, 1999, 500, PWM_green__B_PWM__LESS_THAN, 1999, 1000},                 //sixth pattern 
        {PWM_green__B_PWM__GREATER_THAN_OR_EQUAL_TO, 1999, 1000, PWM_green__B_PWM__LESS_THAN, 999, 500}    //seventh pattern
    };
    
#endif
   
/* [] END OF FILE */
