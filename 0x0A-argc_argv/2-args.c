#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments passed to it
 * @argc: arguments
 * @argv: arguments vector array
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
