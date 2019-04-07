#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * strlen - len
 * @str: string
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
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to print
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int st;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
