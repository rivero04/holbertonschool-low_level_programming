#include "variadic_functions.h"
/**
 * print_numbers - imprime todos los números pasados
 * @separator: carácter que separa los números
 * @n: número de números enteros
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
