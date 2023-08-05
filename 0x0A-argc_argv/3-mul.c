#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */


int main(int argc, char **argv)
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argcv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("\nError");
		return (1);
	}
	return (0);
}

