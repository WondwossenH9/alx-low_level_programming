#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: the character to print on stdout
 * Return: 1 (success)
 * Return: -1 (error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
