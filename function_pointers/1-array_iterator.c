#include "function_pointers.h"
/**
 * array_iterator - Ejecuta una función dada como
 * parámetro en cada elemento de una matriz.
 * @array: la matriz.
 * @size: El tamaño de la matriz.
 * @action: Un puntero a la función a ejecutar.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
