#include "main.h"
/**
  * main - Punto de entrada
  * @arg_count: Conteo de argumentos
  * @arg_vector: Vector de argumentos
  *
  * Return: ...
  */
int main(int arg_count, char **arg_vector)
{
	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(arg_vector[1], arg_vector[2]);
	exit(0);
}
/**
  * cp_file - Copy the content of one file into another.
  * @src: The source file path.
  * @destination: The destination file path.
  *
  */
void cp_file(const char *src, const char *destination)
{
	int source_fd, destination_fd, bytes_read;
	char buffer[1024];

	source_fd = open(src, O_RDONLY);
	if (!src || source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	destination_fd = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		if (write(destination_fd, buffer, bytes_read) != bytes_read
		|| destination_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}
}
