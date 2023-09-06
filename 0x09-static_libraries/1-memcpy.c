#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: dest memory
 *@src: memory copied from
 *@n: number of bytes
 *Return: copied memory with n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
