#include "main.h"

/**
 * binary_to_uint -  unsigned int conversion from binary
 * @b: binary number of string
 * Return: number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int l = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		l = 2 * l + (b[x] - '0');
	}

	return (l);
}
