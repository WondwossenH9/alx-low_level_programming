#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of passed arguments
 * @argv: passed arguments to main
 *
 * Return: 0 on success, on error 1
 */
int main(int argc, char *argv[])
{
	unsigned int i, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];
	for (i = 0, a = 1; i < len; i++)
		a *= argv[1][i];
	p[2] = l[(a ^ 85) & 63];
	for (a = argv[1][0], i = 0; i < len; i++)
		if ((char)a <= argv[1][i])
			a = argv[1][i];
	srand(a ^ 14);
	p[3] = l[rand() & 63];
	for (a = 0, i = 0; i < len; i++)
		a += argv[1][i] * argv[1][i];
	p[4] = l[(a ^ 239) & 63];
	for (a = 0, i = 0; (char)i < argv[1][0]; i++)
		a = rand();
	p[5] = l[(a ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
