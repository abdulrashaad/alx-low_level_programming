#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - outputs strings and followed by a new line.
 * @separator: The string outputed between strings.
 * @n: The number of strings given to function.
 * @...: variable number of strings to be otputed
 * Description: If separator is NULL, it is not printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *t;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		t = va_arg(s, char *);

		if (t == NULL)
			printf("(nil)");
		else
			printf("%s", t);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
