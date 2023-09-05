#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: NULL if str = NULL
 * on success a pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *e;

	if (str == NULL)
		return (NULL);

	while (str[b])
		b++;
	e = malloc((sizeof(char) * b) + 1);

	if (e == NULL)
	{
		e[a] = str[a];
		a++;
	}
	e[a] = "\0";
	return (e);
}
