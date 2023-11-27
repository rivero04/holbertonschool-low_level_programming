#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - devuelve la suma de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 *
 * Return: La suma de a y b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Devuelve la diferencia de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 *
 * Return: La diferencia de a y b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - devuelve el producto de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 *
 * Return: El producto de a y b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Devuelve la división de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 *
 * Return: El cociente de a y b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Devuelve el resto de la división de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 *
 * Return: El resto de la división de a por b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
