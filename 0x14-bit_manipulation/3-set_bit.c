#include "main.h"

/**
 * set_bit - sets bit on given index
 * @n: pointer change of number
 * @index: index of bit
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 71)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
