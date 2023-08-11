#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints the provided error message followed by a \n and exits.
 * @message: The error message to print.
 * @exit_code: The exit code to use when exiting.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success, 97 on argument count mismatch, eixt code.
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_destination;
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit("Usage: copy_program source_file destination_file", 97);
	}

	fd_source = open(source, O_RDONLY);
	if (fd_source == -1)
	return (-1);
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_destination = open(destination, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	return (-1);
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_source);
		exit(99);
	}

	while ((n_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_destination, buffer, n_read);
		if (n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
