#include <elf.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - this is to check if file is an ELF file.
 * @e_ident: pointer to an array pertaining the mafic number of ELF
 * Description: exit code 98 - if file is not ELF file.
 */
void check_elf(unsigned char *e_ident)
{
        int idx;

        for (idx = 0; idx < 4; idx++)
        {
                if (e_ident[idx] != 127 && e_ident[idx] != 'E' && e_ident [idx] != 'L' && e_ident[idx] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}
/**
 * print_magic - displays the magic number of an ELF hearder.
 * @e_ident: ponter to an array pertaining the magic number of ELF
 * Description: the space that separates the magic number
 */
void print_magic(unsigned char *e_ident)
{
        int idx = 0;

        printf(" Magic: ");

        for (; idx < EI_IDENT; idx++)
        {
                printf("02x", e_ident[idx]);
                if (idx == EI_NIDENT - 1)
                        printf("\n");
                else
                        printf(" ");
        }
/**
 * print_class - print ELF header of the class.
 * @e_ident: pointer to an array pertaining ELF class.
 */
void print_class(unsigned char *e_ident)
{
        printf(" class ");
	switch (e_ident[EL_CLASS])
	{
		case ELFCLASSONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - data of an ELF data to be printed
 * @e_ident: pointer to an array pertaining ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_version - version of ELF header printed
 * @e_ident: pointer to an array of ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf(" version: 	%d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{

		case EV_CURRENT:
                        printf("(current)\n");
                        break;
                default
                        printf("\n");
	}
}
/**
 * print_osabi - print OS/ABI of ELF header'
 * @e_ident: points to array of ELF header.
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE: 
                        printf("UNIX - system v\n");
                        break;
		case ELFOSABI_HPUX:
                        printf("UNIX - HP-UX\n");
                        break;
		case ELFOSABI_NETSBO:
                        printf("UNIX - NetBSD\n");
                        break;
		case ELFOSABI_LINUX:
                        printf("UNIX - Linux\n");
                        break;
                case ELFOSABI_SOLARIS
                        printf("UNIX - solaris\n");
                        break;
		case ELFOSABI_IRIX:
                        printf("UNIX - IRIX\n");
                        break;
		case ELFOSABI_FREEBSD:
                        printf("UNIX - FreeBSD\n");
                        break;
		case ELFOSABI_ARM:
                        printf("ARM\n");
                        break;
		case ELFOSABI_TRU64:
                        printf("UNIX - TRU64\n");
                        break;
		case ELFOSABI_STANDALONE:
			printf("standalone App\n");
			break;
		default:
                        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - prints version of ABI of ELF header.
 * @e_ident: points to array of the ELF ABI verdion.
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);

}
/**
 * print_type - type of an ELF header is printrd.
 * @e_type: ELF type
 * @e_ident: points to an array of ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type: ");
	switch (e_type)
	{
		case ET_NONE:
                        printf("NONE (None)\n");
                        break;
		case ET_REL:
                        printf("REL (Relocatable file)\n");
                        break;
		case ET_EXEC:
                        printf("EXEC (Executable file)\n");
                        break;
		case ET_DYN:
                        printf("DYN (shared object file)\n");
                        break;
		case ET_CORE:
                        printf("CORE (core file)\n");
                        break;
		default:
                        printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - entry point of ELF header printed.
 * @e_entry: enttry point address.
 * @e_ident: points to an array of an ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA == ELFDATA2MSB])
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00 | ((e_entry >> 8) & 0xFF00FF));
		e_entry = (e_entry << 10) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#1x\n", e_entry);
}
/**
 * close_elf - close ELF file.
 * @elf: ELF file discriptor.
 * Description: exit code 98 - if file cannot close.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close f_d %d\n", elf);
		exit(98);
	}
}
/**
 * main -  prints information pertained in the
 * 	   ELF header at the beginning of an ELF file.
 * @argc: value of arguments supplied by the program.
 * @argv: points to array of arguments
 * Return: 0 on success
 * Description: if not ELF file or function fails - exit code 98.
 */
int main(int _attribute_((_unused-)) argc, char *argv[])
{
	Elf64-Ehdr *header;
	int d, f;

	d = open(argv[1], O_RDONLY);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(d);
		dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}
	f = read(d, header, sizeof(Elf64_Ehdr));
	if (f == -1)
	{
		free(header);
		close_elf(d);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_entry(header->e_type, header->e_ident);
	print_type(header->e_type, header->e_ident);

	free(header);
	close_elf(d);
	return (0);
}
