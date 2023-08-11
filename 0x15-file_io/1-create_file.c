#include "main.h"

/**
 * create_file - Creation of file.
 * @filename: A pointer for about to be created file
 * @text_content: A pointer for string to be written
 * Return: --1
 */

int create_file(const char *filename, char *text_content)
{
	int ix, hen, e = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (e = 0; text_content[e];)
			e++;
	}

	ix = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	hen = write(ix, text_content, e);

	if (ix == -1 || hen == -1)
		return (-1);

	close(ix);

	return (1);
}
