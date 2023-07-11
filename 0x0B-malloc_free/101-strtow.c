#include <stdlib.h>
#include "main.h"

/**
 * count_word - helps the function in counting number of words in a string
 * @s: string for evaluation
 * Return: number of words
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - divides string into words
 * @str: string to be divided
 * Return: pointer to an array of strings (passed)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **m, *t;
	int q, r = 0, length = 0, w, d = 0, s, e;

	while (*(str + length))
		length++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (q = 0; q <= length; q++)
	{
		if (str[q] == ' ' || str[q] == '\0')
		{
			if (d)
			{
				e = q;
				t = (char *) malloc(sizeof(char) * (d + 1));
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				m[r] = t - d;
				r++;
				d = 0;
			}
		}
		else if (d++ == 0)
			s = q;
	}

	m[r] = NULL;

	return (m);
}
