#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to read text file and print to stdout.
 * @filename: read text file
 * @letters: num of letters to read
 * Return:n, actual num of bytes read and printed
 *        0 when function errors or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu_f;
	ssize_t file_d;
	ssize_t n;
	ssize_t byteread;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	bu_f = malloc(sizeof(char) * letters);
	byteread = read(file_d, bu_f, letters);
	n = write(STDOUT_FILENO, bu_f, byteread);

	free(bu_f);
	close(file_d);
	return (n);
}
