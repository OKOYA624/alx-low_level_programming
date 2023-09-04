#include "main.h"

/**
* handle_error - Displays error message
* @msg: Error message
* @exit_code: Exit code
* Return: void
*/

void handle_error(const char *msg, int exit_code)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(exit_code);
}

/**
* copy_file - Copies file from source to destination
* @src_file: Source file
* @dest_file: Destination file
* Return: Integer
*/

int copy_file(const char *src_file, const char *dest_file)
{
	int src_fd, dest_fd;
	ssize_t num_read, num_written;
	char buffer[1024];

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		handle_error("Can't read from source file", 98);

	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		close(src_fd);
		handle_error("Can't write to destination file", 99);
	}

	while ((num_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		if (num_read == -1)
		{
			close(src_fd);
			close(dest_fd);
			handle_error("Can't read from source file", 98);
		}

		num_written = write(dest_fd, buffer, num_read);

		if (num_written != num_read)
		{
			close(src_fd);
			close(dest_fd);
			handle_error("Can't write to destination file", 99);
		}
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		handle_error("Can't close fd", 100);

	return (0);
}

/**
* main - Program that copies files
* @argc: Number of arguments
* @argv: Argument vector
* Return: Integer
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
