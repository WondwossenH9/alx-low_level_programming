#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: int argument
 * **av - double pointer argument
 * Return: NULL if ac == 0 or av == NULL else a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptrstr;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	ptrstr = malloc(sizeof(char) * l + 1);
	if (ptrstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptrstr[k] = av[i][j];
			k++;
		}
		if (ptrstr[k] == '\0')
		{
			ptrstr[k++] = '\n';
		}
	}
	return (ptrstr);
}
