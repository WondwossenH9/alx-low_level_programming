#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - oncatenates two strings
 * @s1: string input
 * @s2: string input
 * Return: pointer pointer to a newly allocated space in memory
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		i++, j++;
	}
	con[i] = '\0';
	return (con);
}
