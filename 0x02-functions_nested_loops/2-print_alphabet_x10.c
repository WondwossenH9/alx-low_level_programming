#include "main.h"
/**
 * print_alphabet_x10 - prints in lowercase 10 times the alphabets
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
