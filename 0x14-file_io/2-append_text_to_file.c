#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * str_len - len
 * @s: string
 * Return: s
 */
int str_len(char *s)
{
	int sl = 0;

	while (*s != 0)
	{
		sl++;
		s++;
	}
	return (sl);
}

/**
 * create_file -  function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int st;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	st = write(fd, text_content, str_len(text_content));
	if (st < 0)
		return (-1);

	return (1);

}
