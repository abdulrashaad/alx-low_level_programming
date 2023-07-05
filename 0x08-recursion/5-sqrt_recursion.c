#include "main.h"

int actual_sqrt_recursion(int o, int p);

/**
 * _sqrt_recursion -  function that returns natural square root of a number
 * @o: figure to calculate square root
 * Return: square root result
 */

int _sqrt_recursion(int o)
{
	if (o < 0)
		return (-1);
	return (actual_sqrt_recursion(o, 0));
}

/**
 * actual_sqrt_recursion - finds natural recursion of square root
 * @o: calculated number of square root
 * @p: performs iteration
 * Return: square root results
 */

int actual_sqrt_recursion(int o, int p)
{
	if (p * p > o)
		return (-1);
	if (p * p == o)
		return (p);
	return (actual_sqrt_recursion(o, p + 1));
}
