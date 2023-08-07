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
	int b;

	b = 0;
	for (; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
