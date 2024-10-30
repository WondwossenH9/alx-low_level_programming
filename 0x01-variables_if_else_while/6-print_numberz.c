#include <stdio.h>

/**
 * main - entry point
 * num: counter variable
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
