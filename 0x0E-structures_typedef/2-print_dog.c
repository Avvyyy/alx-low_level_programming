#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: Pointer to struct to be printed
 *
 * Return: None
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? (d->name) : ("nil\n"));
		printf("Age: %f\n", (d->age));
		printf("Owner: %s\n", (d->owner) ? (d->owner) : ("nil\n"));
	}
}
