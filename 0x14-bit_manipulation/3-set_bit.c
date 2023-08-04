#include "main.h"

/**
 * set_bit - to set bit at specified to a vlue of one
 * @n: A pointer to the number in which to manipulate the bit
 * @index: index of  bit to specified to one
 * Return: 1 for passsed otherwise -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 70)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
