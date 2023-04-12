#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - func that apend text to a textfile
 * @filename: name of the file
 * @text_content: text we need to add to the file
 * Return: Return 1 if it work or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return(1);
	}
	f_write = write(fd, text_content, strlen(text_content));

	if (f_write == -1)
		return (-1);
	close(fd);
	return (1);
}
