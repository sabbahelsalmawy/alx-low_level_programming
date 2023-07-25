#include"main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */


int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
