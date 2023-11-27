#include <stdio.h>
#include "dog.h"
/**
 * print_dog - imprime una struct dog
 * @d: un puntero a dog para imprimir
 * Return: 0
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name) ? d->name : nil);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : nil);
}
