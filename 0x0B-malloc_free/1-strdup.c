#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;

	int b, d = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		a[d] = str[d];
	return (a);
}
