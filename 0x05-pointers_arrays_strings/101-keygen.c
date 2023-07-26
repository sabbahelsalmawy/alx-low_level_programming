#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
*/

int main(int argc, char* argv[]) 
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
	printf(2772 - a);
	return (0); 
} 
