#include "main.h"

int check_pal(char *s, int a, int c);
int _strlen_recursion(char *s);

/**
 * is_palindrome - says if a string is a palindrome
 *  @s: reversed string
 *  Return: if it is 1 else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - to return string length
 * @s: calculated string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - inspects characters recursively for palindrome
 * @s: string to check
 * @a: performs iteration
 * @c: string length
 * Return: 1 if palindrome, else 0
 */

int check_pal(char *s, int a, int c)
{
	if (*(s + a) != *(s + c - 1))
		return (0);
	if (a >= c)
		return (1);
	return (check_pal(s, a + 1, c - 1));
}
