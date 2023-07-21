#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - outputs any item
 * @format: to list all arguments given to the function
 */

void print_all(const char * const format, ...)
{
	int a = 0;

	char *b, *c = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", c, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", c, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", c, va_arg(l, double));
					break;
				case 's':
					b = va_arg(l, char *);
					if (!b)
						b = "(nil)";
					printf("%s%s", c, b);
					break;
				default:
					a++;
					continue;
			}
			c = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(l);
}
