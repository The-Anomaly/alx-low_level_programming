#include "main.h"

/**
* create_file - creates a file
* @filename: file name
* @text_content: string to be written into the file
*
* Return: 1 if successful, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd, nwr = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[nwr] != '\0')
		nwr++;

	write(fd, text_content, nwr);
	close(fd);
	return (1);
}
