#include "main.h"

/**
 * clear_bit - function sets  value of a bit to zero
 * @n: pointer of the number for change
 * @index: bit to be clearerd index
 * Return: 1 for passed otherwise -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 77)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
