#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1 if not found
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int cont;
	cont = 0;

	if (array == NULL)
	{
		return -1;
	}

	while (cont < size)
	{
		printf("Value checked array[%d] = [%d]\n", cont, array[cont]);

		if (array[cont] == value)
		{
			return (cont);
		}
		cont = cont + 1;
	}
	return (-1);
}
