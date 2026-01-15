/* GPIO Library API code */ 
/* This GPIO Library code can be reused in various applications */ 
/* Simple GPIO library (simulation) */
#ifndef GPIO_H
#define GPIO_H
/* GPIO direction definitions */
#define GPIO_OUTPUT 1
#define GPIO_INPUT  0
/* API functions */
void gpio_init(int pin, int direction);
void gpio_write(int pin, int value);
int  gpio_read(int pin);
#endif
