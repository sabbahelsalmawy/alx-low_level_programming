#include"main.h"
/**
  * _memcpy - copy memory area
  * @dest: dest memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area replaced
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	for (; x < n; x++)
		dest[x] = src;

	return (dest);
}

