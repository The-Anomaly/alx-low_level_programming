#include "main.h"
#include <stdio.h>

/**
 * err_rw - checks if files can be opened, read from or written into.
 * @fdf: file_from.
 * @fdt: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void err_rw(int fdf, int fdt, char *argv[])
{
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - copy file
* @argc: number of input arguments
* @argv: list of input arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int fdf, fdt, err;
	char buf[1024];
	ssize_t n, nwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fdf = open(argv[1], O_RDONLY);
	err_rw(fdf, fdt, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(fdf, buf, 1024);
		if (n == -1)
			err_rw(-1, 0, argv);
		nwr = write(fdt, buf, n);
		if (nwr == -1)
			err_rw(0, -1, argv);
	}

	err = close(fdf);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	err = close(fdt);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	return (0);
}
