#include"main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	x = 0;
	z = 0;
	while (dest[x] != '\0')
		x++;
	for (; z < n && src[z] != '\0'; z++)
	{
		dest[x] = src[z];
		x++;
	}
	return (dest);
}
