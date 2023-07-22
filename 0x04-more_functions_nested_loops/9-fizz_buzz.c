#include <stdio.h>

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
	int a;

	printf("%d", a);
	for (a = 1; a < 101; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf('\n');
	return (0);
}
