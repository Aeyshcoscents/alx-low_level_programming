#include "main.h"

/**
 * read_textfile - the reading of text file function
 * @letters: the number of letters parameter function
 * @filename: the text file parameter function
 * Return: the actual number of bytes read and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ab;
	ssize_t c;
	ssize_t d;
	char *out;

	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);

	c = write(STDOUT_FILENO, out, d);
	d = read(ab, out, letters);
	out = malloc(sizeof(char) * letters);

	free(out);
	close(ab);
	return (c);
}
