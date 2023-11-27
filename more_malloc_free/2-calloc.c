#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Asigna memoria para una matriz de un número determinado
 * de elementos cada uno de un tamaño de byte ingresado.
 * @nmemb: El número de elementos.
 * @size: el tamaño en bytes de cada elemento de la matriz.
 *
 * Return: Si nmemb = 0, tamaño = 0, o la función falla - NULL.
 * En caso contrario, un puntero a la memoria asignada.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *puntero;
	char *completador;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	puntero = malloc(size * nmemb);

	if (puntero == NULL)
		return (NULL);

	completador = puntero;

	for (i = 0; i < (size * nmemb); i++)
		completador[i] = '\0';

	return (puntero);
}
