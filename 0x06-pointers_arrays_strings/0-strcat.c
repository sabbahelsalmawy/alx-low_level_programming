#include"main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x, z;

	x = 0;
	z = 0;
	while (dest[x] != '\0')
		x++;
	for (; src[z]; z++)
	{
		dest[x] = src[z];
			x++;
	}
	return (dest);
}
