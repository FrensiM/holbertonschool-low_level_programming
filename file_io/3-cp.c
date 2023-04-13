#include "main.h"
/**
 * main - entry func
 * @argc: nr of arg
 * @argv: array
 * Return: Return 0 for succes
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp(argv[1], argv[2]);
	
	return (0);
}
/**
 * cp - copy from a file to another file
 * @file_form: the file destination
 * @file_to: the source file
 */
void cp(char *file_from, char *file_to)
{
	int file_src, file_dest, r_src, w_dest;
	char count[1024];

	file_src = open(file_from, O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	
	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	r_src = read(file_src, count, 1024);
	if (r_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	
	while (r_src != 0)
	{
		w_dest = write(file_dest, count, r_src);
		if (w_dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		r_src = read(file_src, count, 1024);
		if (r_src == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	cls(file_dest);
	cls(file_src);
}
/**
 * cls - func that close
 * @file: the file to be closed
 */
void cls(int file)
{
	int cls_f;

	cls_f = close(file);

	if (cls_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

