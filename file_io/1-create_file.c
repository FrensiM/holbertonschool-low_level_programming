#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - func that create the file
 * @filename: name of file
 * @text_content: nr of bytes
 * Return: return the value 1 if succes and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file_w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = creat(filename, 0600);
		return (1);
	}
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	file_w = write(fd, text_content, strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(fd);
	return (1);
}
