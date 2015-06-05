#include "include/dynamixel.h"
#include "usart.h"
#include <avr/io.h>

int main(void)
{

    DDRG    = 0xff;
    PORTG   = 0xff;

    // Insert code
    dynamixel_init();

    uint8_t     id          = 1;
    uint8_t     address     = 0x20;
    uint16_t    speed       = 1023;

    dynamixel_writeword(id,address,speed);

    while(1);

    return 0;
}
