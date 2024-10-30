#include <stdio.h>
/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
