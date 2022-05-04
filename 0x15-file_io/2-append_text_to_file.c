#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: string to be added
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n = 0, nwr;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[n] != '\0')
		n++;

	nwr = write(fd, text_content, n);
	if (nwr == -1)
		return (-1);
	close(fd);
	return (1);
}
