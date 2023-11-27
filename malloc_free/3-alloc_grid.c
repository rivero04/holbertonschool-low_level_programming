#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - devuelve un puntero a una matriz bidimensional de
 * números enteros con cada elemento inicializado en 0.
 * @width: El ancho de la matriz bidimensional.
 * @height: la altura de la matriz bidimensional.
 *
 * Return: Si ancho <= 0, alto <= 0, o la función falla - NULL.
 * En caso contrario, un puntero a una matriz bidimensional de números enteros
 */

int **alloc_grid(int width, int height)
{
	int **dosD;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	dosD = malloc(sizeof(int *) * height);

	if (dosD == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		dosD[hgt_i] = malloc(sizeof(int) * width);

		if (dosD[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(dosD[hgt_i]);

			free(dosD);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			dosD[hgt_i][wid_i] = 0;
	}

	return (dosD);
}
