#include "main.h"

/**
 * leet - fuction encode to 13337 speak
 * @n: input values
 * Return: value of n
 */

char *leet(char *n)
{
	int x, y;

	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}
	return (n);
}
