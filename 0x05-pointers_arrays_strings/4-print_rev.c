#include "main.h"
/**
 * print_rev - function that prints string, in reverse, followed by a new line
 * @s: represents string
 * return: always return 0
 */
void print_rev(char *s)
{
	int hard = 0;
	int h;

	while (*s != '\0')
	{
		hard++;
		s++;
	}
	s--;
	for (h = hard; h > 0; h--)
	{
		_putchar(*s);
		s--;
	}
}
