#include"main.h"
/**
 * print_last_digit - Check Main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int l;

	if (r < 0)
		l = -1 * (r % 10);
	else
		l = r % 10;
	_putchar((l % 10) + '0');
	return (l);
}
