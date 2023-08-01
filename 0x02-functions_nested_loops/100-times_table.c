#include "main.h"
/**
 * print_times_table - prints time table of n times starting from 0
 * @n: the number of times table
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				m = i * j;
				if (m <= 99)
					_putchar(' ');
				if (m <= 9)
					_putchar(' ');
				if (m >= 100)
				{
					_putchar((m / 100) + '0');
					_putchar(((m / 10)) % 10 + '0');
				}
				else if (m <= 99 && m >= 10)
				{
					_putchar((m / 10) + '0');
				}
					_putchar((m % 10) + '0');
			}
					_putchar('\n');
		}
	}
}
