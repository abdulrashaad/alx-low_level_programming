#include <stdio.h>
#include "main.h"

/**
 * _atoi - convertion from a string to an integer
 * @s: string for conversion
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;

	while (a < d && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;

	}

	if (e == 0)
		return (0);

	return (c);

}

/**
 * main - two numbers multiplied
 * @argc: arguments numbers
 * @argv: argument arrays
 * Return: return 0 (passed), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1  = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
