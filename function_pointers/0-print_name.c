#include "function_pointers.h"

/**
 * print_name - imprime un nombre.
 * @name: El nombre que se imprimirá.
 * @f: Un puntero a una función que imprime un nombre.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
