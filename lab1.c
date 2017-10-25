/* Lab 1  - ID number 815009790 */
#include <p18f452.h>
#include <delays.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main (void){
/* Insert code from pre-lab Q14 to change values on PORTB */
    int count;
    
    TRISB = 0;
    PORTB = 0;
    
    for(count = 1; count < 16; count++){
        PORTB = count;
        Delay1KTCYx(150000);
    }
    
}
