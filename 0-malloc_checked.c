#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocation of memory using malloc
 * @b: allocation of number of bytes
 * Return: allocated memory of pointer
 */
void *malloc_checked(unsigned int b)
{
	void *abc;

	abc = malloc(b);

	if (abc == NULL)
		exit(98);

	return (abc);
}
