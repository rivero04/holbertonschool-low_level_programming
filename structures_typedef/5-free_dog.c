#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - libera una struct de tipo dog
 * @d: un puntero a la struct dog
 * Return:0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
