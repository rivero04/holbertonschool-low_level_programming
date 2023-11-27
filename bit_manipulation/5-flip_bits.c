#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: first number provided
 * @m: second number provided
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count, largo1, largo2, total_largo;
	int bit1, bit2;

	largo1 = get_length(n);
	largo2 = get_length(m);
	total_largo = (largo1 > largo2) ? largo1 : largo2;

	count = 0;
	for (i = 0; i < total_largo; i++)
	{
		bit1 = n & 1;
		bit2 = m & 1;

		if (bit1 != bit2)
			count++;

		n >>= 1;
		m >>= 1;
	}
	return (count);
}

/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 *
 * Return: length of number
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 0; count++)
		num >>= 1;
	return (count);
}
