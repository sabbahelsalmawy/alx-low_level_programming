#include<stdio.h>
#include<srdlib.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *e;

	while (--argc)
	{
		for (e = argv[argc]; *e; e++)
			if (*e < '0' || *e > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argc[argv]);
	}
	printf("%d\n", sum);
	return (0);
}
