#include <stdio.h>

/**
 * main - entry point
 * first: first loop counter
 * second: second loop counter
 * third: third loop counter
 * Return: 0 on success
 */

int main(void)
{
	int first, second, third;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if (first != 8 || second != 9 || third != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

