#include <unistd.h>
#include <string.h>
/*Prints string exactly as given*/
/**
 * main - entry point
 * str: string
 * Return: 1 on error
 */

int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, str, strlen(str));

	return (1);
}
