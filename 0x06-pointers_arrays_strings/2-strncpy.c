#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	for (; src[b] != '\0' && b < n; b++)
		*dest[a] = *src[b];
	return (dest)
}
