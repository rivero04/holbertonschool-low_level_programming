#include "dog.h"
/**
 * init_dog - inicializa una variable de tipo struct dog.
 * @d: un puntero a una struct dog
 * @name: el nombre a establecer
 * @age: edad a configurar
 * @owner: propietario a configurar
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
