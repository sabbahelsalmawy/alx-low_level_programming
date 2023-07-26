#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
*/

int main()
{
	int a;
	char c;

	srand(time(NULL));

	while(a <= 2645)
	{
		c = rand() % 128;
		a += c;
		putchar(c);
	}
	putchar(2772 - a);
	return (0); 
} 
