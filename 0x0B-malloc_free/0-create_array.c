#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 * @c: input character
 * @size: size of array
 * Return: NULL if size = 0 else a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		b[i] = c;
	return (b);
}
