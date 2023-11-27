#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crea una serie de caracteres y
 * lo inicializa con un carácter específico.
 * @size: El tamaño de la matriz que se inicializará.
 * @c: El carácter específico con el que inicializar la matriz.
 *
 * Return: Si tamaño == 0 o la función falla - NULL.
 * De lo contrario: un puntero a la matriz.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
