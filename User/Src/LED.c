#include "main.h"
#include "tim.h"
#include "LED.h"

void LED_Init(void)
{

}
uint8_t LED_SetDuty(uint8_t duty)
{
    if(duty > 100)return 1;

    return 0;
}