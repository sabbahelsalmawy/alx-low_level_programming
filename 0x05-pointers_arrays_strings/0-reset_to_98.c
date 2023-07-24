#include "main.h"
#include<stdio.h>

/**
 * reset_to_98 - main
 * @n: - pinter to int
 */



void reset_to_98(int *n)
{
	n = 402;

	printf("%d, \n, n");
	int *p = &n;
	*p = 98;
	printf("%d, *p");
}
