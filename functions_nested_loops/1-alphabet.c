#include "main.h"

/**
  *print_alphabet - print the English alphabet from A to Z.
  *
  * Return: void
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
