#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creation of array integers
 * @min: minimum range of values keptin array
 * @max: maximum range of values and number of elements stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int z, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (z = 0; min <= max; z++)
		p[z] = min++;

	return (p);
}
