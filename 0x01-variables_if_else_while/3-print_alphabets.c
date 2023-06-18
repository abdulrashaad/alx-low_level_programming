#include <stdio.h>
/**
 * main - Point of entry
 * Return: return 0 passed
 */
int main(void)
{
	char letter;

	letter = 'a';

	letter = 'A';

	while
		(letter <= 'z') {
			putchar(letter);
			letter++;
		}
	while
		(letter <= 'Z') {
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
