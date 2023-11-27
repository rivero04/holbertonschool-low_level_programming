#include "main.h"

/**
 * _strpbrk - searches astring for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Description: This functio finds the first character in the
 * string s that matches any character specified null-characters
 * Return: pointer to the byte in s that atches one of the byte
 * in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
