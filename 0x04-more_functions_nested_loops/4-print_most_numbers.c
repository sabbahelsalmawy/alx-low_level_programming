#include "main.h"
/**
 *
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 9; ch++)
	{
		if (ch != '2' && ch != '4')
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
