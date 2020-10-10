/* ========================================
 *
 * The interrupt is called by the pression of the button
 * In particular the ISR starts when the button is released
 * 
 * ========================================
*/

#ifndef __INTERRUPT_ROUTINES_H_
    
    #define __INTERRUPT_ROUTINES_H_
    #define MAX_PATTERN 7 //numerosity of the patterns
    #include "project.h"
    
    CY_ISR_PROTO(Custom_BUTTON_ISR);
    
#endif


/* [] END OF FILE */
