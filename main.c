#include "setupclock.h"
#include "setupinter.h"
int main() {
		clockinit();
		interinit();
	
	while(1){}
}

void SysTick_Handler(void)
{
		GPIOC->ODR ^= GPIO_ODR_ODR8;
}
void EXTI0_IRQHandler(void)
{
		EXTI->PR |= EXTI_PR_PR0;
		GPIOC->ODR ^= GPIO_ODR_ODR9;
}