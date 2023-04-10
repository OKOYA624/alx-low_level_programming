#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *file)
{
	char *bfr;

	bfr = malloc(sizeof(char) * 1024);

	if (bfr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bfr);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers
* Return: 0 on success.
* Description: If the argument count is incorrect
*/
int main(int argc, char *argv[])
{
	int ff, ft, br, w;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfr = create_buffer(argv[2]);
	ff = open(argv[1], O_RDONLY);
	br = read(ff, bfr, 1024);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ff == -1 || br == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bfr);
			exit(98);
		}

		w = write(ft, bfr, br);
		if (ft == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}

		br = read(ff, bfr, 1024);
		ft = open(argv[2], O_WRONLY | O_APPEND);

	} while (br > 0);

	free(bfr);
	close_file(ff);
	close_file(ft);

	return (0);
}
