#include <stdio.h>

/**
 * main - entry point of the program
 * ch - store alphabet
 * Return: 0 on success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;

	}
	putchar('\n');

	return (0);
}
