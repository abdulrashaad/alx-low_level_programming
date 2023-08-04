#include "main.h"

/**
 * binary_to_uint - convertion of binary number to
 * unsigned integer in program
 * @b: string that contains binary number
 * Return: converted number is returned(passed)
 */

unsigned int binary_to_uint(const char *b)
{
	int rash;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (rash = 0; b[rash]; rash++)
	{
		if (b[rash] < '0' || b[rash] > '1')
			return (0);
		val = 2 * val + (b[rash] - '0');
	}

	return (val);
}
