#include "main.h"
#include <stdlib.h>

/**
 * reading_textfile- Read text file and print to STDOUT.
 * @filename:name of the text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t d;
	ssize_t w;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	r = read(d, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(d);
	return (w);
}

