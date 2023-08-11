#include "main.h"
#include <fcntl.h>
#include <stdio.h>

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
	if (argc != 3)
	{
		error_exit("Usage: copy_program source_file destination_file", 97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	{
		error_exit("Error: Copy failed", 98);
	}

	printf("File copied successfully!\n");

	return (0);
}
