#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */


int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc != 3)
	{
		printf("Error\n");
                return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

