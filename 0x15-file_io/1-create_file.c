#include "main.h"

/**
* create_file - Creates a file
* @filename: File name
* @text_content: Content to write to file
* Return: Integer to indicate success
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(fd, text_content, len);

		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
