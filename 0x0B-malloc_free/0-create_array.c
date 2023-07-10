#include "main.h"
#include <stdlib.h>

/**
 * create_array -function create array size and assign char c
 * @size: array size
 * @c: assigning to char
 * Description: creation of  array size and assign char c
 * Return: pointer to array (passed), NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
