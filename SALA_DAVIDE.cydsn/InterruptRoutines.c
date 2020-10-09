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

 // Include header
#include "InterruptRoutines.h"


  // Include required header files
#include "patterns.h"
#include "project.h"

CY_ISR(Custom_BUTTON_ISR)
{
    SetPattern(secondo);
        
}

/* [] END OF FILE */
