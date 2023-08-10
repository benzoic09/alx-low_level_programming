#include "main.h"
#include <fcntl.h>

#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code);
int copy_file(const char *source, const char *destination);
void print_copied_bytes(ssize_t bytes);

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success, 97 on argument count mismatch, exit code from copy_file on error.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
error_exit("Usage: cp file_from file_to", 97);
}

int result = copy_file(argv[1], argv[2]);

return (result);
}

/**
 * error_exit - Prints the provided error message followed by a newline and exits.
 * @message: The error message to print.
 * @exit_code: The exit code to use when exiting.
 */
void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @source: The source file to read from.
 * @destination: The destination file to write to.
 * Return: 0 on success, 98 if read error, 99 if write error.
 */
int copy_file(const char *source, const char *destination)
{
int fd_from, fd_to;
ssize_t n_read, n_write;
char buffer[BUFFER_SIZE];

fd_from = open(source, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
return (98);
}

fd_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
close(fd_from);
return (99);
}

if (fchmod(fd_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't set permissions for %s\n", destination);
close(fd_from);
close(fd_to);
return (99);
}

while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
n_write = write(fd_to, buffer, n_read);
if (n_write != n_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
close(fd_from);
close(fd_to);
return (99);
}
print_copied_bytes(n_write);
}

if (n_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
close(fd_from);
close(fd_to);
return (98);
}

close(fd_from);
close(fd_to);
return (0);
}


void print_copied_bytes(ssize_t bytes)
{
printf("Copied %zd bytes\n", bytes);
}

