#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int e;

	e = 0;
	for (; s[e] >= '\0'; e++)
	{
		if ((s[e] + 1) == accept)
			return (s[e]);
	}
	return (s);
}
