#include <stdio.h>
/**
 * main - finds and prints 98 fibonacci numbers
 * followed by a new line and separated by comma
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int pre = 1;
	unsigned long int post = 2;
	unsigned long int m = 1000000000;
	unsigned long int pre1;
	unsigned long int pre2;
	unsigned long int post1;
	unsigned long int post2;

	printf("%lu", pre);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", post);
		post += pre;
		pre = post - pre;
	}

	pre1 = (pre / i);
	pre2 = (pre % i);
	post1 = (post / i);
	post2 = (post % i);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", post1 + (post2 / i));
		printf("%lu", post2 % i);
		post1 = post1 + pre1;
		pre1 = post1 - pre1;
		post2 = post2 + pre2;
		pre2 = post2 - pre2;
	}
	print('\n');
	return (0);
}

