#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns string length
 * @a: evaluation for string
 * Return: string lenght
 */

int _strlen(char *a)
{
	int b;

	b = 0;

	while (a[b] != '\0')
	{
		b++;
	}

	return (b);
}

/**
 * *_strcpy - copy of string pointed to by src
 * that includes the terminating null byte (\0)
 * @d: pointer to the buffer in which to  copy the string
 * @s: string to be copied in
 * Return: pointer to d
 */

char *_strcpy(char *d, char *s)
{
	int l, b;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (b = 0; b < l; b++)
	{
		d[b] = s[b];
	}
	d[b] = '\0';

	return (d);
}

/**
 * new_dog - creation of new dog
 * @name: dogs name
 * @age: dog age
 * @owner: owner dog
 * Return: pointer to the new dog (passed), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	g = malloc(sizeof(dog_t));
	if (g == NULL)
		return (NULL);

	g->name = malloc(sizeof(char) * (l1 + 1));
	if (g->name == NULL)
	{
		free(g);
		return (NULL);
	}
	g->owner = malloc(sizeof(char) * (l2 + 1));
	if (g->owner == NULL)
	{
		free(g);
		free(g->name);
		return (NULL);
	}
	_strcpy(g->name, name);
	_strcpy(g->owner, owner);
	g->age = age;

	return (g);
}
