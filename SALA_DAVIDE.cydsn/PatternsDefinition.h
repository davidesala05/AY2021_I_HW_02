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
 * All the patterns are group together in an array of struct
 * 
 * ========================================
*/
#ifndef __PATTERNS_H_
    #define __PATTERNS_H_
    
    #include "PatternDriver.h"
    
    /*
        In order to switch between the patterns is the easiest way,
        the patterns are group together in a vector of structs.
    */
    
    pattern ALL_Patterns[] = {
        
        {2, 3999, 0, 2, 3999, 0},       //first pattern
        {2, 3999, 0, 2, 1999, 1000},    //second pattern
        {4, 1999, 1000, 2, 3999, 0},    //third pattern
        {2, 999, 500, 4, 999, 500},     //fourth pattern       
        {4, 499, 250, 2, 499, 250},     //fifth pattern 
        {2, 1999, 500, 2, 1999, 1000},  //sixth pattern 
        {4, 1999, 1000, 2, 999, 500}    //seventh pattern
    };
    
#endif
   
/* [] END OF FILE */
