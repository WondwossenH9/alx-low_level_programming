#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file prints it to
 * POSIX standard output
 * @filename: text file to read from
 * @letters: number of letters in text file
 * Return: w- actual number of letters it could read and print,
 * else 0 if file cannot be opened
 * or if filename is NULL or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(f, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(f);
	return (w);
}
