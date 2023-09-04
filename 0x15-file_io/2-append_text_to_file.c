#include "main.h"

/**
 * append_text_to_file - add text at end of file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the text to append to the file.
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t _write;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	_write = write(file, text_content, len);
	if (_write == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
