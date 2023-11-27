#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descrp, read_count;

	char *temp_storage;

	if (!filename)
		return (0);

	file_descrp = open(filename, O_RDONLY);

	if (file_descrp == -1)
		return (0);

	temp_storage = malloc(sizeof(char) * letters);

	if (!temp_storage)
	{
		close(file_descrp);
		return (0);
	}

	read_count = read(file_descrp, temp_storage, letters);

	if (read_count == -1)
	{
		free(temp_storage);
		close(file_descrp);
		return (0);
	}

	write(STDOUT_FILENO, temp_storage, read_count);

	free(temp_storage);
	close(file_descrp);
	return (read_count);
}
