#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int longB = 0;
	int a;

	while (*s != '\0')
	{
		longB++;
		s++;
	}
	s--;
	for (a = longB; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
