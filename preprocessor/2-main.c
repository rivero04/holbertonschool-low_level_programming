#include <stdio.h>

/**
 * main - Imprime el nombre del archivo desde el que se compiló el programa,
 * seguido de una nueva línea.
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
