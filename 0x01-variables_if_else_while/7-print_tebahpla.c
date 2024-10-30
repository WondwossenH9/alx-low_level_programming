#include <stdio.h>

/**
 * main - entry point
 * ch: variable for characters
 * Return: 0 on success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
