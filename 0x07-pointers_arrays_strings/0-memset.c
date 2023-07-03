#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for(; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
