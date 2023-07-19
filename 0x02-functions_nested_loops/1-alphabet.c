#include "main.h"
#include <stdio.h>
/**
 * description: -  print alphabet lowercase by _putcher by used it two time
 *
 *
 * void print_alphabet(void): -  is function used to print alphabet
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 *
*/
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n')
}
