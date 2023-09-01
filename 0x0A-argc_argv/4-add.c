#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers and prints the result
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			b = argv[i];
			for (a = 0; a < strlen(b); a++)
			{
				if (a[b] < 48 || a[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(b);
			b++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
