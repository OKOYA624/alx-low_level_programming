#include "main.h"

/**
* read_textfile - Function to read content of a text file
* @filename: File name
* @letters: Number of letters to read and print
* Return: Number of letters read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *ch;

	if (!filename)
		return (0);

	ch = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	if (!ch || fd == -1)
		return (0);

	bytes_read = read(fd, ch, letters);
	bytes_written = write(STDOUT_FILENO, ch, bytes_read);

	free(ch);
	close(fd);

	return (bytes_written);
}
