#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the function to start code entry point
 *
 *
 * n:is the variablr that store number randam in every time
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if      (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
