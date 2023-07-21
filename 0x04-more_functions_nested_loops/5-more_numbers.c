#include "main.h"
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		if (a >= 10)
				_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
	}
		_putchar('\n');
}
