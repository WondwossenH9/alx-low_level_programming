#include <stdio.h>
/**
 * main - finds and prints 98 fibonacci numbers
 * followed by a new line and separated by comma
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2;
	int count = 0;

	printf("%d, %d", a, b);

	while (count < 96)
	{
		int temp = a + b;
		printf(", %d", temp);
		a = b;
		b = temp;
		count++;
	}
	printf("\n");
	return (0);
}
