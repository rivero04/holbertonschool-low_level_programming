#include "main.h"
/**
 * *_memcpy - copie n characters from the memory
 * area source to the memory area destination
 * @dest: Pointer to the destination array
 * @src: Pointer to the source array
 * @n: Te number od bytes to be copied from
 * source to destination
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
