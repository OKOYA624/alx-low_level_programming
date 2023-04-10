#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
* Return: If the function fails -1
*/
int create_file(const char *filename, char *text_content)
{
	int description, write_ret, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}

	description = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_ret = write(description, text_content, l);

	if (description == -1 || write_ret == -1)
		return (-1);

	close(description);

	return (1);
}

