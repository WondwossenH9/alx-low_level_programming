#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point of the program
 * alphabet: alphabet letters
 * Return: 0 on success
 */

int main(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t i;

	for (i = 0; i < strlen(alphabet); i++)
	{
		if (alphabet[i] >= 'A' && alphabet[i] <= 'Z')
		{
			putchar(tolower(alphabet[i]));
		}
		else
		{
			putchar(alphabet[i]);
		}
	}
	return (0);
}
