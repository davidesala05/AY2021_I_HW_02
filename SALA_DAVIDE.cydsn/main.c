/* ========================================
 *
 * DAVIDE SALA
 * SECOND ASSIGNMENT
 * 
 * Breif explanation of my interpretation of the patterns:
 * I use the patterns provided in the README file as the PWMs (one for RED LED and one for the GREEN one).
 * So, given the fact that the RGB LED is in a common anode configuration,
 * when the PWM stays HIGH, the corresponding LED is in OFF state; the opposite happens in when the PWM is LOW.
 * 
 * Then, for instance taking into account the first pattern (at the power-on of the system),
 * both the LEDs are OFF until the first pression of the button.
 * 
 * 
 * 
 * 
 * ========================================
*/
#include "InterruptRoutines.h"
#include "project.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    /* Place your initialization/startup code here */
    BUTTON_ISR_StartEx(Custom_BUTTON_ISR);
    
    for(;;)
    {
  
    }
}

/* [] END OF FILE */
