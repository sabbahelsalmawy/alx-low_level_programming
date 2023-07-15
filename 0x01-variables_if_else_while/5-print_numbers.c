#include <stdio.h>
/**
 * main - entry point
 * Description: Print all numbers of base 10
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n')
	
	return (0);
}	
