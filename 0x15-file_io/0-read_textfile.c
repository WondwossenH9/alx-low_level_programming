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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
