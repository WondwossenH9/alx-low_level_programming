#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed to the stdout
 * Return: 1 (Success) and return -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
