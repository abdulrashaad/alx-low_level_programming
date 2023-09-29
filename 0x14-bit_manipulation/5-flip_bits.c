#include "main.h"

/**
 * flip_bits - to count number of bits
 * @n: 1st number
 * @m: 2nd number
 * Return: c
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, c = 0;
	unsigned long int nt;
	unsigned long int ve = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		nt = ve >> x;
		if (nt & 1)
			c++;
	}

	return (c);
}
