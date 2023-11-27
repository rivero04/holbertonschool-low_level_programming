#include "main.h"
#include <stdlib.h>
/**
 * array_range - Crea una matriz de números enteros ordenados
 * de mínimo a máximo, inclusive.
 * @min: El primer valor de la matriz.
 * @max: El último valor de la matriz.
 *
 * Return: Si min > max o la función falla - NULL.
 * En caso contrario, un puntero a la matriz recién creada.
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
