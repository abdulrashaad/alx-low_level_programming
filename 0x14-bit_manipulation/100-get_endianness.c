#include "main.h"

/**
 * get_endianness - for checks only
 * Return: zero indicates big and one otherwise
 */

int get_endianness(void)
{
	unsigned int zee = 1;
	char *c = (char *) &zee;

	return (*c);
}
