#include "main.h"

/**
 * flip_bits - to count number of bits for change
 * @n: 1st number
 * @m: 2nd number
 * Return:changed number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ddd, xxx = 0;
	unsigned long int current;

	unsigned long int exclusive = n ^ m;

	for (ddd = 63; ddd >= 0; ddd--)
	{
		current = exclusive >> ddd;
		if (current & 1)
			xxx++;
	}

	return (xxx);
}
