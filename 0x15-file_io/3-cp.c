#include "main.h"
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

int main(int argc, char *argv[]) {
int fd_from, fd_to;
ssize_t n_read, n_write;
char buffer[BUFFER_SIZE];

if (argc != 3) {
error_exit("Usage: cp file_from file_to", 97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99);
}

while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
n_write = write(fd_to, buffer, n_read);
if (n_write != n_read) {
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

if (n_read == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}

if (close(fd_from) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return 0;
}
