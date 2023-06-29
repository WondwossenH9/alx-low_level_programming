#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, b = (length_of_the_string -1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, b, longB;

	longB = 0;

	for (a = 0; str[a] != '\0'; a++)
	
		longB++;
	b = (longB / 2)
	if ((longB % 2) == 1)
		b = ((longB + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
