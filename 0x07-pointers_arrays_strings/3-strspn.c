#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int e, a;

	e = 0;
	a = 0;

	for (; s[e] != '\0'; e++)
	{
		for (; accept[a] != '\0'; a++)
			if (s[e] == accept[a])
			return (e);
	}
	return (e);
}
