#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t _write;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_des == -1)
	return (-1);

	if (text_content != NULL)
	{
		_write = write(file_des, text_content, strlen(text_content));
		if (_write == -1)
		{
			close(file_des);
			return (-1);
		}
	}

	close(file_des);
		return (-1);
}


