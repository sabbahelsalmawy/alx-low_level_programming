#include"main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
*/

void rev_string(char *s)
{
	int i, x;
	char temp;

	for (i = 0; s[i]; i++)
		;
	for (x = 0; x < i / 2; x++)
	{
			temp = s[x];
			s[x] = s[i - 1 - x];
			s[i - 1 - x] = temp;
	}
}
