#include "main.h"


/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int a;

	a = 0 ;
	if (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
