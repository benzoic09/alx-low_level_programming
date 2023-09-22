#include "main.h"


/**
 * display_error - Display an error message and exit with a status code.
 * @msg: The error message to display.
 * @status: The exit status code.
 */
void display_error(const char *msg, int status)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(status);
}


/**
 * display_elf_header_info - Display information from the ELF header.
 * @header: A pointer to the ELF header structure.
 * Return: zero
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64)
			? "ELF64" : "ELF32");
	printf("  Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type: %d\n", header->e_type);
	printf("  Entry point address: %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - main function
 * @argc: - arg count
 * @argv: - arg vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename\n", 98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Could not open the file\n", 98);
	}


	close(fd);

	display_elf_header_info(&elf_header);
	return (0);
}
