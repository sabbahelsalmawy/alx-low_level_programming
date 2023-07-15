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
	n = rand() - RAND_MAX / 2
	y = n % 10
		if (y > 5)
			printf("Last digit of %d and is greater than 5\n", n, y);
		else if (y == 0)
			printf("Last digit of %d and is 0\n", n, y);
		else 
			printf("Last digit of %d and is less than 6 and not 0\n", n, y);
	return (0);
}
