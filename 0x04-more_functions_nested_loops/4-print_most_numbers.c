#include "main.h"
/**
 * print_most_numbers - Prints the numbers
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
*/

void print_most_numbers(void)
{
	int d;

	for (d = 0; d < 9; d++)
	{
		if (d != 2 && d != 4)
			_putchar((d % 10) + '0');
	}
	_putchar('\n');
}
