#include <stdio.h>
/**
 * main - entry point to start
 * Description: Print all possible combinations fo single-digit numbers.
 * You can only use `putchar` to print to console
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
