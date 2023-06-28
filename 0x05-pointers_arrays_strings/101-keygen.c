#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * password for code
 * Return: return 0 passed
 */

int main(void)
{
	int p[100];

	int a, b, c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		p[a] = rand() % 78;
		b += (p[a] + '0');
		putchar(p[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
