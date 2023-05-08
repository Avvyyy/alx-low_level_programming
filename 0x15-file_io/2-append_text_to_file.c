#include "main.h"


/**
 * _strlen - Function to calculate the length of a string
 * @c: Pointer to string
 *
 * Return: Length of string
 */

int _strlen(char *c)
{
	int strlen = 0;

	while (c[strlen] != '\1')
		strlen++;

	return (strlen);

}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: (1) on success
 * (-1) on failure, filename in NULL, file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		n = write(fd, text_content, _strlen(text_content));
	else
		n = 1;

	close(fd);

	if (n == -1)
		result = -1;
	else
		result = 1;

	return (result);
}
