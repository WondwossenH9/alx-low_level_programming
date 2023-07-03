#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: area where memory is stored
 * @src: area where memory is copied
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
