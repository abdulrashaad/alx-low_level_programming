#include <stdlib.h>
#include "main.h"

/**
 * *_memset - functions fills constant byte to memory
 * @s: area to be filled on memory
 * @f: to copy to char
 * @n: couple of times to copy b
 * Return: pointer to the memory area s (passed)
 */

char *_memset(char *s, char f, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = f;
	}

	return (s);
}

/**
 * *_calloc - allocation of array memory
 * @nmemb: elements in the array
 * @size: array size of each element
 * Return: pointer to allocated memory array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
