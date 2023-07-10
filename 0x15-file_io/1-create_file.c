#include "main.h"

/**
 * create_file - to create a file.
 * @filename: A pointer that points to the file name to create.
 * @text_content: A pointer that points to a string to write in file.
 *
 * Return: If it failed - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(file_d, text_content, len);

	if (file_d == -1 || n == -1)
		return (-1);

	close(file_d);

	return (1);
}
