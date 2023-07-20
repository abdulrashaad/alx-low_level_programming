#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - outputs numbers and followed by a new line.
 * @separator: string to be outouted between numbers.
 * @n: number of integers given to function.
 * @...: A variable number of numbers to be outputed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int i;

	va_start(m, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(m, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(m);
}
