#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size size and assigns c
 * @c: char to assign
 * @size: size of array
 * Return: pointer to array else NULL
 */

char *create_array(unsigned int size, char c)
{
        char *str;
        unsigned int a;

        str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;

	return (str);
}
