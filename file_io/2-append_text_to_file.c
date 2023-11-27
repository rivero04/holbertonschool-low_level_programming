#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int write_res, file_descrp;

	if (!filename)
		return (-1);

	file_descrp = open(filename, O_WRONLY | O_APPEND);

	if (file_descrp == -1)
		return (-1);

	if (text_content)
	{
		write_res = write(file_descrp, text_content, _strlen(text_content));

		if (write_res == -1)
		{
			close(file_descrp);
			return (-1);
		}
	}

	if (close(file_descrp) == -1)
		return (-1);

	return (1);
}
