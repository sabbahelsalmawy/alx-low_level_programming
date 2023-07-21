#include "main.h"

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
