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
    
    /* 
       The patterns are defined as a struct composed by 6 16bit values
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
    
    void SetPattern (pattern p); // Declaration of the function used to initialized the pattern

#endif

/* [] END OF FILE */
