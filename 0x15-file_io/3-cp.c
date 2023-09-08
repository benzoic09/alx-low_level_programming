#include "main.h"
#define BUFFER_SIZE 1024

void close_file(int fd);


/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: an array of pointers
 * Return: 0
 * Description: if the argument count is incorrect - exit code 97
 * if file from does not exit - exit code 98
 * if file_to cannot be created  - exit code 99
 * if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, _read, _write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(file_from);
		exit(99);
	}

	do {
		_read = read(file_from, buffer, BUFFER_SIZE);
		if (_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(file_from);
			close_file(file_to);
			exit(98);
		}

		_write = write(file_to, buffer, _read);
		if (_write == -1 || _write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
	} while (_read > 0);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
