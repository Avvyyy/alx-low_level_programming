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

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
