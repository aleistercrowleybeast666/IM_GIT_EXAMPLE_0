#include "main.h"
#include "tim.h"
#include "delay.h"
void Delay_Init(void)
{
    HAL_TIM_Base_Start(&DELAY_TIM);
    __HAL_TIM_SET_COUNTER(&DELAY_TIM, 0);
}
void Delay_us(uint16_t us)
{
    __HAL_TIM_SET_COUNTER(&DELAY_TIM, 0);
    while(__HAL_TIM_GET_COUNTER(&DELAY_TIM) < us);
}