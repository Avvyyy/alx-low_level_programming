#include <stdio.h>

/**
 * main - Function to print all the argumnets passed to run a program
 * @argc: Argumnet Count
 * @argv: Atgument Vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		for (; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
