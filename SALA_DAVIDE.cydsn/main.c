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
    
    PWM_red_SetCompareMode(PWM_red__B_PWM__LESS_THAN);    //Initialization of the COMPARE MODE for the first pattern
    PWM_green_SetCompareMode(PWM_green__B_PWM__LESS_THAN);  //Both for RED and GREEN channels
    
    PWM_red_Start();  //Both PWMs switched ON  
    PWM_green_Start();
    
    for(;;)
    {
  
    }
}

/* [] END OF FILE */
