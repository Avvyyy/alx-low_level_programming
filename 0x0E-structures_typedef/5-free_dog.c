#include "dog.h"

/**
 * free_dog - Function to free dogs
 * @d: Pointer to memory to be freed
 *
 * Return: None
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
