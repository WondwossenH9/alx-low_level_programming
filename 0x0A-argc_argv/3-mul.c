#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the product of two numbers followed by new line
 * if number of arguments is less than 2 it prints Error
 * @argc: argument count
 * @argv: argument array vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
