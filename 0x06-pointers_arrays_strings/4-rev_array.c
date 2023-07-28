#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	x = 0;
	while (x < (n - 1))
	{
		x++;
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
