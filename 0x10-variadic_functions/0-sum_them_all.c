#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the paramters of all calculated sum
 * @n: number of paramters that has been passed to the function.
 * @...: variable number of paramters for sum of calculation
 * Return: If n == 0 - 0 else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	unsigned int z, sum = 0;

	va_start(xy, n);

	for (z = 0; z < n; z++)
		sum += va_arg(xy, int);

	va_end(xy);

	return (sum);
}
