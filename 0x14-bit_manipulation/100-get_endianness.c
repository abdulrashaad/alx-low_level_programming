#include "main.h"

/**
 * get_endianness - checks machine
 * Return: d
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *d = (char *) &x;

	return (*d);
}
