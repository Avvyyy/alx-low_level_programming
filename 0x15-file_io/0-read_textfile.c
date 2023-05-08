#include "main.h"

/**
 *read_textfile -  function that reads a text file and prints
 * it to the POSIX standard output.
 *@filename: File on which file handling will be carried out on
 *@letters: Size of letter sit should read or print
 *
 * Return: the actual number of letters it could read and print
 * 0: if
 * filename is NULL
 * file can not be opened or read
 *write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, d;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	n = read(fd, buffer, letters);

	if (fd == -1 || n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	d = write(STDOUT_FILENO, buffer, letters);

	if (d < n)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (d);
}
