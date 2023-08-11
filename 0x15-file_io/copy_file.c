#include "main.h"
#define BUFFER_SIZE 1024

/**
 * copy_file - Copies the content of one file to another.
 * @source: The source file to read from.
 * @destination: The destination file to write to.
 * Return: 0 on success, 98 if read error, 99 if write error.
 */
int copy_file(const char *source, const char *destination)
{
	int fd_source, fd_destination;
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	fd_source = open(source, O_RDONLY);
	if (fd_source == -1)
		return (-1);

	fd_destination = open(destination, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		return (-1);

	while ((n_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_destination, buffer, n_read);
		if (n_written != n_read)
		{
			close(fd_source);
			close(fd_destination);
			return (-1);
		}
	}

	if (n_read == -1)
	{
		close(fd_source);
		close(fd_destination);
		return (-1);
	}

	close(fd_source);
	close(fd_destination);
	return (0);
}
