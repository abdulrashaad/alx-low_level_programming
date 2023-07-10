#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main point of  entry
 * @ac: int input integers
 * @av: double pointer array of int
 * Return: 0 passed
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, l = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		string[c] = av[a][b];
		c++;
	}
	if (string[c] == '\0')
	{
		string[c++] = '\n';
	}
	}
	return (string);
}
