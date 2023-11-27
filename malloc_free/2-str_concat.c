#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatena dos cadenas.
 * @s1: la cadena sobre la que se concatenará.
 * @s2: La cadena que se concatenará con s1.
 *
 * Return: Si falla la concatenación - NULL.
 * De lo contrario: un puntero al espacio recién asignado en la memoria.
 * que contiene las cadenas concatenadas.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
