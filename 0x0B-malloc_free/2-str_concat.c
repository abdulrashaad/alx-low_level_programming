#include "main.h"
#include <stdlib.h>

/**
 * str_concat - sum up the size of input conclusion
 * @s1: insert one to concat
 * @s2: insert two to concat
 * Return: concat of s1 and s2 (passed)
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = malloc(sizeof(char) * (a + b + 1));

	if (c == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		c[a] = s2[b];
		a++, b++;
	}
	c[a] = '\0';
	return (c);
}
