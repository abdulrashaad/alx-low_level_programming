#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: Sring input
 * return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];

	int haru = 0;

	int x;

	while (s[haru] != '\n')
		haru++;
	for (x = 0; x < haru; x++)

	{
		haru--;
		rev = s[x];
		s[x] = s[haru];
		s[haru] = rev;
	}
}


