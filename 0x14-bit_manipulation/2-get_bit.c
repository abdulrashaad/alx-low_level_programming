#include "main.h"

/**
 * get_bit - value to return in decimal
 * @n: searched number
 * @index: index
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	if (index > 65)
		return (-1);

	l = (n >> index) & 1;

	return (l);
}
