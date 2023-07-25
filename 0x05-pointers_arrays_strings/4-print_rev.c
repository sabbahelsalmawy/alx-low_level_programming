#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	for (a-- ; a >= 0; a--)
		_putchar(a);
        _putchar('\n');
}

