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
	unsigned int x, z;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (z = 0; *(accept + z) != '\0'; z++)
		{
			if (*(s + x) == *(accept + z))
				return (s + x);
		}
	}
	return ('\0');
}
