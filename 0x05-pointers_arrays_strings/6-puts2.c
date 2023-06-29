#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longB = 0;
	int a = 0;
	char *e = str;
	int f;

	while (*e != '\0')
	{
		e++;
		longB++;
	}
	a = longB - 1;
	for (f = 0; f <= a; f++)
	{
		if (f % 2 == 0)
		{
			_putchar(str[f]);
		}
	}
	_putchar('\n');
}
