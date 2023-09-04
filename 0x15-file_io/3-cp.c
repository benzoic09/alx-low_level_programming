#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - Prints provided error message followed by a \n and exits.
 * @message: error message to pint
 * @exit_code:the exit code to use when exit
 *
 */

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - main progam
 * @argc: - No. of CMD line arguments
 * @argv:  -array containing the arguments
 *
 * Return: 0 on success, 97 on argument count mismatch, eixt code.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t _read, _write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit("usage: copy_program source_file destination_file", 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		_write = write(fd_to, buffer, _read);
		if (_write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

