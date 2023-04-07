#include "main.h"
#include <stdio.h>

/**
 * main - Function to print the name of a C source file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: None
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
