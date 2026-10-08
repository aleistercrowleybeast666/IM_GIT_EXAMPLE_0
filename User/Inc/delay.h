#ifndef __DELAY_H
#define __DELAY_H

#include "tim.h"
#define DELAY_TIM htim2

void Delay_Init(void);
void Delay_us(uint16_t us);

#endif