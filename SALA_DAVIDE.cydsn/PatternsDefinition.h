/* ========================================
 *
 * Definition of all the seven patterns used for the combinations
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
 * All the patterns are group together in an array of struct
 * 
 * ========================================
*/
#ifndef __PATTERNS_H_
    #define __PATTERNS_H_
    
    #include "PatternDriver.h"
    
    pattern ALL_Patterns[] = {
        
        {3999, 3999, 0, 3999, 3999, 0},       //primo pattern
        {3999, 3999, 0, 1999, 1999, 1000},    //secondo pattern
        {1000, 1999, 1000, 3999, 3999, 0},    //terzo pattern -------------> In this case the pattern of the R channel starts LOW, 
        {999, 999, 500, 499, 999, 500},       //quarto pattern               to set that in the PWM I initialize the internal counter to the half of the period,
        {250, 499, 250, 499, 499, 250},       //quinto pattern               in this way the PWM starts LOW for an half of the period (phase shift).
        {1999, 1999, 500, 1999, 1999, 1000},  //sesto pattern                The same strategy is used for the 4-G, 5-R and 7-R channels.
        {1000, 1999, 1000, 999, 999, 500}     //settimo pattern
    };
    
#endif
   
/* [] END OF FILE */
