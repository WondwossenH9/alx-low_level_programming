#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file name
 * @text_content: string to add to end of file
 * Return: -1 if fail or else -1
 * if filename is NULL if the file does not exist
 * the user lacks write permissions -1, else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
