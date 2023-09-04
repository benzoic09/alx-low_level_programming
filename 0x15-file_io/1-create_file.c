#include "main.h"

/**
 * create_file - created a file
 * @filename: pointer to the file created
 * @text_content: pointer to a string to file written
 *
 * Return: if fails -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t _write;
	ssize_t len = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	_write = write(file, text_content, len);
	if (_write == -1 || file == -1)
		return (-1);

	close(file);
	return (1);
}
