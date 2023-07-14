#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates bytes of n of strings
 * @s1: append to string yet
 * @s2: concatenate from yet string
 * @n: s2 to concatenate to s1 number of byte
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int b = 0, c = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s)
		return (NULL);

	while (b < l1)
	{
		s[b] = s1[b];
		b++;
	}

	while (n < l2 && b < (l1 + n))
		s[b++] = s2[c++];

	while (n >= l2 && b < (l1 + l2))
		s[b++] = s2[c++];

	s[b] = '\0';

	return (s);
}
