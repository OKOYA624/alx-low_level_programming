#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: A pointer to the name of the file to read.
* @letters: The number of letters to read and print.
* Return: The number of letters read and printed, or 0 if an error occurred.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int description, nr, nw;
	char *b;

	if (filename == NULL)
		return (0);

	description = open(filename, O_RDONLY);
	if (description == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	nr = read(description, b, letters);
	close(description);

	if (nr == -1)
	{
		free(b);
		return (0);
	}

	nw = write(STDOUT_FILENO, b, nr);
	free(b);

	if (nr != nw)
		return (0);

	return (nw);
}

