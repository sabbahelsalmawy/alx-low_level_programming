#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, z;

	x = 0;
	z = 0;

	for (; s[x] != '\0'; x++)
	{
		for (; accept[z] != '\0'; z++)
		{
			if (accept[z] == s[x])
			{
				s += x
				return (s);
			}
		}
	}
	return ('\0');
}
