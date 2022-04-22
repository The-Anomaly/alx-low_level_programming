#include<stdio.h>

void startupFunc(void) __attribute__ ((constructor));

/**
* startupFunc - function executed before main
* Description: constructor attribute added to function
* to make it execute before main
*/
void startupFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
