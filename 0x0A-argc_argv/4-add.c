#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - sting digits
 * @str: array strings
 * Return: return 0 always (passed)
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str)) /*c string*/
	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - outputs program name
 * @argc: argument count
 * @argv: argument arrays
 * Return: return 0 (passed
 */

int main(int argc, char *argv[])
{
	/*Declaring of variables*/
	int c;
	int str_to_int;
	int add;

	c = 1;

	while (c < argc) /*Passes through the whole array*/
	{
		if (check_num(argv[c]))
		{
			str_to_int = atoi(argv[c]); /*ATOI --> convertion from string to int*/
			add += str_to_int;
		}
		/**checks if one of the digits contains symbols that differ from numbers*/
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", add);  /*print add*/
	return (0);
}
