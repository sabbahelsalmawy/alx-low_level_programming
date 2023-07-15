#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y;

	x = 0;
	y = 'a';
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
