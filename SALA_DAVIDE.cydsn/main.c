/* ========================================
 *
 * DAVIDE SALA
 * SECOND ASSIGNMENT
 * 
 * ========================================
*/
#include "InterruptRoutines.h"
#include "PatternDriver.h"
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    /* Place your initialization/startup code here */
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    
    PWM_red_SetCompareMode(2);    //Initialization of the COMPARE MODE for the first pattern
    PWM_green_SetCompareMode(2);  //Both for RED and GREEN channels
    
    PWM_red_Start();  //Both PWMs switched ON  
    PWM_green_Start();
    
    for(;;)
    {
  
    }
}

/* [] END OF FILE */
