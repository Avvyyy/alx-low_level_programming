#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply 2 numbers
 * @argc: Argument count
 * @argv: argument vector`
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
