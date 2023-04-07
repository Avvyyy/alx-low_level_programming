#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Function to print the sum  of positive numbers
 * @argc: Argumnet count
 * @argv: Argument vector
 *
 * Return: 1(if error) else 0
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
	}

	return (0);
}
