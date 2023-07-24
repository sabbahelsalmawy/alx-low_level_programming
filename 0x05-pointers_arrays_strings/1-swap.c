#include"main.h"

/**
 * that function is prototybe
 * @a = b and @b = a
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */


void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
