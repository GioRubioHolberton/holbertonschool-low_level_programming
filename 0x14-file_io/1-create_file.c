#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int st;
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while ((text_content + len) != '\0')
		len++;

	st = write(fd, text_content, len(text_content));
	if (st < 0)
		return (-1);
	return (1);
}
