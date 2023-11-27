#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatena dos cadenas usando como máximo un numero de byte
 * @s1: La primera cadena.
 * @s2: La segunda cadena.
 * @n: El número máximo de bytes de s2 para concatenar a s1.
 *
 * Return: Si la función falla - NULL.
 * En caso contrario, un puntero al espacio concatenado en la memoria.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
