#include "main.h"
#include <stdlib.h>

/**
 * _strdup - devuelve un puntero a un espacio recién asignado en la memoria
 * que contiene una copia de la cadena dada como parámetro.
 * @str: La cadena que se va a copiar.
 *
 * Return: Si str == NULL o no hay suficiente memoria disponible - NULL.
 * En caso contrario, un puntero a la cadena duplicada.
 */

char *_strdup(char *str)
{
	char *doble;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	doble = malloc(sizeof(char) * (l + 1));

	if (doble == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		doble[i] = str[i];

	doble[l] = '\0';
	return (doble);


}
