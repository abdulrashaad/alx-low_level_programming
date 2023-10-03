#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ce(unsigned char *ei);
void pm(unsigned char *ei);
void pc(unsigned char *ei);
void pd(unsigned char *ei);
void pv(unsigned char *ei);
void pa(unsigned char *ei);
void po(unsigned char *ei);
void pt(unsigned int etype, unsigned char *ei);
void pe(unsigned long int eentry, unsigned char *ei);
void cle(int e);

/**
 * ce - see elf files
 * @ei: magic numbers of pointer
 * Description: exit code 98.
 */

void ce(unsigned char *ei)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ei[i] != 127 &&
		    ei[i] != 'E' &&
		    ei[i] != 'L' &&
		    ei[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * pm - Print magic num
 * @ei: magic numbers
 * Description: separated by spaces.
 */

void pm(unsigned char *ei)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ei[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * pc - Prints class of elf
 * @ei: pointer
 */

void pc(unsigned char *ei)
{
	printf(" Class: ");

	switch (ei[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ei[EI_CLASS]);
	}
}

/**
 * pd - Prints data
 * @ei:  pointer to an arry
 */

void pd(unsigned char *ei)
{
	printf(" Data: ");

	switch (ei[EI_DATA])
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
		printf("<unknown: %x>\n", ei[EI_CLASS]);
	}
}

/**
 *  * pv - Prints version
 *   * @ei: pointer to an arry
 *    */

void pv(unsigned char *ei)
{
	 printf(" Version: %d",
			  ei[EI_VERSION]);

	switch (ei[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * po - Prints os/ob
 * @e_ident: pointer to arry
 */

void po(unsigned char *ei)
{
	printf(" OS/ABI: ");

	switch (ei[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ei[EI_OSABI]);
	}
}

/**
 * pa - Prints the ABI
 * @ei: pointer to an array
 */

void pa(unsigned char *ei)
{
	printf(" ABI Version: %d\n",
		ei[EI_ABIVERSION]);
}

/**
 * pt - Prints the type
 * @et: The type.
 *@ei: pointer to an array
 */

void print_type(unsigned int et, unsigned char *ei)
{
	if (ei[EI_DATA] == ELFDATA2MSB)
		et >>= 8;

	printf(" Type: ");

	switch (et)
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
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 pe - Prints the entry point
 * @ee: The address
 * @e_ident: pointer to an array
 */

void pe(unsigned long int ee, unsigned char *ei)
{
	printf(" Entry point address: ");

	if (ei[EI_DATA] == ELFDATA2MSB)
	{
		ee = ((ee << 8) & 0xFF00FF00) |
			  ((ee >> 8) & 0xFF00FF);
		ee = (ee << 16) | (ee >> 16);
	}

	if (ei[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", ee);
}

/**
 * cle - Close file
 * @e: The file
 * Description: exit code 98.
 */
void cle(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays inf
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 * Return: 0
 * Description: If the file is good exit code 98.
 */

int main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *h;
	int ou, ru;

	ou = open(av[1], O_RDONLY);
	if (ou == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		cle(ou);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	ru = read(ou, h, sizeof(Elf64_Ehdr));
	if (ru == -1)
	{
		free(h);
		close_elf(ou);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	cle(h->ei);
	printf("ELF Header:\n");
	pm(h->ei);
	pc(h->ei);
	pd(h->ei);
	pv(h->ei);
	po(h->ei);
	pa(h->ei);
	pt(h->et, h->ei);
	pe(h->eentry, h->ei);

	free(h);
	cle(ou);
	return (0);
}
