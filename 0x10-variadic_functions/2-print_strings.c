#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strptr;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		strptr = va_arg(strings, char *);

		if (strptr == NULL)
			printf("(nil)");
		else
			printf("%s", strptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
