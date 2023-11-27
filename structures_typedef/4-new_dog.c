#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - devuelve la longitud de una cadena
 *@s: puntero de carácter
 *Return: la longitud del string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * *_strcpy - copia la cadena apuntada
 *@dest: copia de la cadena
 *@src: origen de la cadena
 *Return: dest copia destino
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - función que crea un nuevo perro
 *@name: nombre del perro
 *@age: edad del perro
 *@owner: nombre del dueño del perro
 *Return: perro creado
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname, *cowner;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

cname = malloc(sizeof(char *) * (_strlen(name) + 1));

	if (cname == NULL)
	{
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cname = _strcpy(cname, name);

	cowner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (cowner == NULL)
	{
		free(cowner);
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cowner = _strcpy(cowner, owner);

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;

	return (new_dog);
}
