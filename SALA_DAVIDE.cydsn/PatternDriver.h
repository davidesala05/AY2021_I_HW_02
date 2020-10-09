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
        
        uint16 start_count_red;
        uint16 period_red;
        uint16 DC_red;
        uint16 start_count_green;
        uint16 period_green;
        uint16 DC_green;
        
    } pattern;
    
    void SetPattern (pattern p);

#endif

/* [] END OF FILE */
