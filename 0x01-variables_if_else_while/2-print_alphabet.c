#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the function to start code entry point
 *
 *
 * a:is the variablr that store number of ASCII vale of alpha
 * putcher - is print the vale of a that have ASCII vale of alpha
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
