#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @up: pointer
 *
 * Return: up
 */
char *string_toupper(char *up)
{
	int i;

	i = 0;
	while (up[i] != '\0')
	{
		if (up[i] >= 'a' && up[i] <= 'z')
			up[i] = up[i] - 32;
		i++;
	}
	return (up);
}

