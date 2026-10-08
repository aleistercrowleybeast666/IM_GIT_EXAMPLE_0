#ifndef __LED_H
#define __LED_H

#include "tim.h"
#define LED_TIM htim4
#define LED_CHANNEL TIM_CHANNEL_1

void LED_Init(void);
uint8_t LED_SetDuty(uint8_t duty);

#endif