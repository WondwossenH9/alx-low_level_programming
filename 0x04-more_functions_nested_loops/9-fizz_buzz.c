#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line
 * numbers multiples of 3 main prints Fizz
 * for numbers multiples of 5 main prints Buzz
 * for numbers multiples of both 3  & 5 main prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
		printf("\n");

		return (0);
}
