
#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

int main() {
    configureClocks();
 
    buzzer_init();
    buzzer_set_period(1000);	/* start buzzing!!! */


    //  buzzer_state_machine();
    or_sr(0x18);          // CPU off, GIE on
}

//void buzzer_state_machine()
//{
//return;
//}
