#include "main.h"
#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code);
int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);
void copy_file(const char *src_file, const char *dest_file);

/**
 * main - Main program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 97 on argument count mismatch, exit code.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * error_exit - Prints provided error message followed by a newline and exits.
 * @message: Error message to print.
 * @exit_code: The exit code to use when exiting.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * open_file - Opens a file with the specified mode.
 * @filename: The name of the file to open.
 * @flags:  behavior of the open system call when opening a file.
 * @mode: The mode in which to open the file.
 * Return: The file descriptor of the opened file.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Closes the specified file descriptors.
 * @fd: The file descriptor to close for the source file.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies the contents of the source file to the destination file.
 * @src_file: The file descriptor of the source file.
 * @dest_file: The file descriptor of the destination file.
 */
void copy_file(const char *src_file, const char *dest_file)
{
	int fd_from = open_file(src_file, O_RDONLY, 0);
	int fd_to = open_file(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t _read, _write;

	while ((_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		_write = write(fd_to, buffer, _read);
		if (_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
}
