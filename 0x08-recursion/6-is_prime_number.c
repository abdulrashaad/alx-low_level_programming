#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime or not
 * @o: evaluation of number
 * Return: return 1 if o is prime else 0
 */

int is_prime_number(int o)
{
	if (o <= 1)
		return (0);
	return (actual_prime(o, o - 1));
}

/**
 * actual_prime - if a number is prime recursively it calculates
 * @o: evaluation of number
 * @p: performs iteration
 * Return: return 1 if prime recursively calculates else 0
 */

int actual_prime(int o, int p)
{
	if (p == 1)
		return (1);
	if (o % p == 0 && p > 0)
		return (0);
	return (actual_prime(o, p - 1));
}
