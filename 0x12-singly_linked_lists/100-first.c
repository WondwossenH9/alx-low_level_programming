#include <stdio.h>

void print(void) __attribute__ ((constructor));

/**
 * print - prints the sentence before main execution
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
