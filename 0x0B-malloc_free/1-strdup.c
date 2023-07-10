#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocate duplicate to new memory
 * @str: char strings
 * Return: return 0 (passed)
 */

char *_strdup(char *str)
{
	char *m;

	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	m = malloc(sizeof(char) * (a + 1));

	if (m == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		m[b] = str[b];

	return (m);
}
