#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: the character to print
 * Return: 1 (Success)
 * error -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
