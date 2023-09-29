#include "main.h"

/**
 * clear_bit - value is set to 0
 * @n: change number of pointer
 * @index: index of bit
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 71)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
