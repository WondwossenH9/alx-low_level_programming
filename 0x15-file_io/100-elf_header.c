#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

void print_magic(unsigned char *e_ident)
{
	printf("Magic:  ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf(" %02x", e_ident[i]);
	printf("\n");
}

void print_class(unsigned char e_class)
{
	printf("Class:                             ");
	switch (e_class)
	{
		case ELFCLASS32: printf("ELF32\n");
				 break;
		case ELFCLASS64: printf("ELF64\n");
				 break;
		default: printf("Invalid class\n");
	}
}

void print_data(unsigned char e_data)
{
	printf("Data:                              ");
	switch (e_data)
	{
		case ELFDATA2LSB: printf("2's complement, little endian\n");
				  break;
		case ELFDATA2MSB: printf("2's complement, big endian\n");
				  break;
		default: printf("Invalid data encoding\n");
	}
}

void print_version(unsigned char e_version)
{
	printf("Version:                           ");
	switch (e_version)
	{
		case EV_CURRENT: printf("1 (current)\n");
				 break;
		default: printf("Invalid version\n");
	}
}

void print_osabi(unsigned char e_osabi)
{
	printf("OS/ABI:                            ");
	printf("%s\n", e_osabi == ELFOSABI_NONE ? "UNIX - System V" : "Unknown");
}

void print_abiversion(unsigned char e_abiversion)
{
	printf("ABI Version:                       %u\n", e_abiversion);
}

void print_type(uint16_t e_type)
{
	printf("Type:                              ");
	switch (e_type)
	{
		case ET_REL: printf("REL (Relocatable file)\n");
			     break;
		case ET_EXEC: printf("EXEC (Executable file)\n");
			      break;
		case ET_DYN: printf("DYN (Shared object file)\n");
			     break;
		case ET_CORE: printf("CORE (Core file)\n");
			      break;
		default: printf("Unknown\n");
	}
}

void print_entry(uint64_t e_entry)
{
	printf("Entry point address:               0x%lx\n", e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	int fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}
	unsigned char e_ident[EI_NIDENT];

	if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	if (memcmp(e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}
	if (lseek(fd, 0, SEEK_SET) < 0)
	{
		perror("Error seeking in file");
		close(fd);
		exit(98);
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	close(fd);
	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abiversion(header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type);
	print_entry(header.e_entry);
	return (0);
}
