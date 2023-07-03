#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: the character to be printed
 * Return: On success 1 and on error -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
