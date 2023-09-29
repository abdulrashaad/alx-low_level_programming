#include "main.h"

/**
 * binary_to_uint -  unsigned int conversion from binary
 * @b: binary number of string
 * Return: number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int h;

	unsigned int l = 0;

	if (!b)
		return (0);

	while (b[h])
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		l = 2 * l + (b[h] - '0');
		h++;
	}

	return (l);
}
