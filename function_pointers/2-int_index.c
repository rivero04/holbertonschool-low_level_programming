#include "function_pointers.h"

/**
 * int_index - busca un número entero en una matriz de números enteros.
 * @array: la matriz de números enteros.
 * @size: El tamaño de la matriz.
 * @cmp: Un puntero a la función que se utilizará para comparar valores.
 *
 * Return: Si ningún elemento coincide o el tamaño <= 0 - -1.
 * De lo contrario - el índice del primer elemento para el cual
 * la función cmp no devuelve 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
