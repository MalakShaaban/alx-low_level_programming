#include "main.h"
#include "stdlib.h"

/**
 * @filename: the text file being read
 * @letters:the number of letters to read
 *  read_textfile- Read text file to print STDOUT.
 *   Return: w- the real number of bytes read and printed
 *        0 when function fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}
