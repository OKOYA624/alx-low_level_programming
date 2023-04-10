#include "main.h"
#include <stdlib.h>

/**
* printout - Read text file and print to STDOUT.
* @filename: Name of the file to be read.
* @alphabets: Number of characters to be read.
*
* Return: On success, the total number of characters written.
*         On error, 0.
*/
ssize_t printout(const char *filename, size_t alphabets)
{
	char *buff;
	ssize_t file_descriptor, write_count, read_count;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buff = malloc(sizeof(char) * alphabets);
	read_count = read(file_descriptor, buff, alphabets);
	write_count = write(STDOUT_FILENO, buff, read_count);

	free(buff);
	close(file_descriptor);

	return (write_count);
}

