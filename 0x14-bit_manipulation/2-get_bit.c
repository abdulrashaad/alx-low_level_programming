#include "main.h"

/**
 * get_bit - returning of the bit value at an index
 * of decimal number
 * @n: n represents number to look for
 * @index: represents the bits inde
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int napo;

	if (index > 77)
		return (-1);

	napo = (n >> index) & 1;

	return (napo);
}
