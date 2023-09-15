#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strptr, *b = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", b, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(l, double));
					break;
				case 's':
					strptr = va_arg(l, char *);
					if (!strptr)
						strptr = "(nil)";
					printf("%s%s", b, strptr);
					break;
				default:
					a++;
					continue;
			}
			b = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(l);
}
