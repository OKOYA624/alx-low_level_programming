#include "main.h"
#include <stdlib.h>

/**
* printout - Read text file and print to STDOUT
* @file_name: name of file being read
* @alphabets: number of alphabets to be read
*
* Return: Number of bytes read and printed, or 0 on failure
*/
ssize_t printout(const char *file_name, size_t alphabets)
{
	char *buff;
	ssize_t file_desc, write_count, read_count;

	file_desc = open(file_name, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * alphabets);
	read_count = read(file_desc, buff, alphabets);
	write_count = write(STDOUT_FILENO, buff, read_count);

	free(buff);
	close(file_desc);

	return (write_count);
}

