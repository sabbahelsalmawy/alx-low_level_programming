#include "main.h"
#include <stdio.h>
/**
 * function print_alphabet: - prints the alphabe in lowercase
 */

void print_alphabet(void)
{
	char al;

	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}
