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
 * ========================================
*/
#ifndef __PATTERNS_H_
    #define __PATTERNS_H_
    
    #include "PatternDriver.h"
    
    pattern primo = {3999, 3999, 0, 3999, 3999, 0}; //the first is the red pattern and then there is the green one
    pattern secondo = {3999, 3999, 0, 1999, 1999, 1000};
    pattern terzo = {1000, 1999, 1000, 3999, 3999, 0};
    pattern quarto = {999, 999, 500, 499, 999, 500};
    pattern quinto = {250, 499, 250, 499, 499, 250};
    pattern sesto = {1999, 1999, 500, 1999, 1999, 1000};
    pattern settimo = {1000, 1999, 1000, 999, 999, 500};
    
#endif
   
/* [] END OF FILE */
