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
	int sum;
	char *e;

	if (argc > 1)
	{
		for (e = argv[argc]; *e; e++)
			if (*e < '0' || *e > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(e);
		e++;
		printf("%d\n", sum);
	}
			else
			{
				printf("0\n");
			}
		return (0);
}
