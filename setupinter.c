 #include "stm32f10x.h"
 
 void interinit (void) {
		SysTick->CTRL = 0;
		
		SysTick->VAL = 0;
	 
		SysTick->LOAD = 3000000;
		
		SysTick->CTRL |= SysTick_CTRL_ENABLE | SysTick_CTRL_TICKINT;
		SysTick->CTRL &= ~SysTick_CTRL_CLKSOURCE;
	 
		AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI0_PA;
	 
		EXTI->IMR |= EXTI_IMR_MR0;
	 
		EXTI->FTSR |= EXTI_FTSR_TR0;
	 
		NVIC->ISER[0] |= NVIC_ISER_SETENA_6;
 }