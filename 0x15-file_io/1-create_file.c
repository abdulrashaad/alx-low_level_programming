#include "main.h"

/**
 * create_file - to Create file
 * @filename:  pointer name of file to be created.
 * @text_content: pointer to string to write to file.
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int d, wu, en = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (en = 0; text_content[en];)
			en++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wu = write(d, text_content, en);

	if (d == -1 || wu == -1)
		return (-1);

	close(d);

	return (1);
}
