#include <stdio.h>
/**
 * main - entry point
 * num: variable
 * Return: 0 on success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (num = 0; num < 6 ; num++)
	{
		putchar(num + 'a');
	}
	putchar('\n');

	return (0);
}
