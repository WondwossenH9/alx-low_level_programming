#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, return NULL
 * if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;

	return (ptr);
}
