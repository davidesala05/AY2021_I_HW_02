/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#ifndef __PATTERNDRIVER_H_
    
    #define __PATTERNDRIVER_H_
    
    #include "cytypes.h"
    
     typedef struct {
        
        uint16_t start_count_red;
        uint16_t period_red;
        uint16_t DC_red;
        uint16_t start_count_green;
        uint16_t period_green;
        uint16_t DC_green;
        
    } pattern;
    
    void SetPattern (pattern p);

#endif

/* [] END OF FILE */
