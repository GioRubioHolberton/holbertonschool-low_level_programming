#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to print
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sz;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);

	buf =  malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	sz = write(STDOUT_FILENO, buf, sz);
	if (sz < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	else
	{
		free(buf);
		close(fd);
		return (sz);
	}
}
