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
 * create_file -  function that creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: (1) on create success
 * (-1) on create failure or permission denied
 * (-1) if filename if NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, d, i, result;
	char *buffer = malloc(sizeof(char) * _strlen(text_content));

	for (i = 0; text_content[i]; i++)
	{
		buffer[i] = text_content[i];
	}

	buffer[i] = '\0';

	if (text_content == NULL)
		text_content = "";

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT,  S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	d = write(fd, buffer, _strlen(text_content));

	close(fd);
	free(buffer);

	if (d == -1)
		result = -1;
	else
		result = 1;

	return (result);
}
