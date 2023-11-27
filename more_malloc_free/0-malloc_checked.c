#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - asigna memoria usando malloc.
 * @b: el número de bytes que se asignarán.
 *
 * Return: Un puntero a la memoria asignada.
 */
void *malloc_checked(unsigned int b)
{
	void *puntero = malloc(b);

	if (puntero == NULL)
		exit(98);

	return (puntero);
}
