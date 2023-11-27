#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selecciona la función correcta a realizar
 * la operación solicitada por el usuario.
 * @s: El operador pasado como argumento.
 *
 * Return: Un puntero a la función correspondiente
 * al operador dado como parámetro.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
