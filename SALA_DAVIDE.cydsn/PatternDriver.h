/* ========================================
 *
 * In this header are defined the structures of the patterns
 * and the function used to change the PWM's parameters
 *
 * ========================================
*/

#ifndef __PATTERNDRIVER_H_
    
    #define __PATTERNDRIVER_H_
    
    #include "cytypes.h"
    #include "PWM_red.h"
    #include "PWM_green.h"
    /* 
       The patterns are defined as a struct composed by 2 8bit variables and 4 16bit variables
       16 bit are required by the PWMs to achieve the dimension of the msec
       The first three values are the parameters of the RED channel,
       the last three are those of the GREEN one
    */
    
     typedef struct {
        
        uint8_t mode_red;
        uint16_t period_red;
        uint16_t DC_red;
        uint8_t mode_green;
        uint16_t period_green;
        uint16_t DC_green;
        
    } pattern;
    
    /*The parameters are:
      -- mode_[color] : is the COMPARE MODE for the PWM, the values that I use are two in this case and are defined by default in the PWM_[color].h libraries
      -- period_[color] : is the parameter used to define the period of the PWM
      -- DC_[color] : used to set the duty cyle of the PWM
    */
    
    void SetPattern (pattern p); // Declaration of the function used to initialized the pattern

#endif

/* [] END OF FILE */
