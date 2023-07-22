#include <stdio.h>
/***/

int main (void)
{
	int a;

	for (a = 1; a < 101; a++)
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
	if (a % 5 == 0)
	{
		printf("Buzz");
	}
	if (a % 3 == 0 && a % 5 == 0)
	{
		printf(FizzBuzz);
	}
	printf('\n');
}
