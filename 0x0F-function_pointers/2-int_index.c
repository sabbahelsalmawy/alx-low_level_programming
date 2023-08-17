#include"function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (c = 0; c < size; c++)
			if (cmp(array[c]))
				return (c);
	}
	return (-1);
}
