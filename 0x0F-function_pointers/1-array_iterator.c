#include"function_pointers.h"

/**
  * array_iterator - ...
  * @array: ...
  * @size: ...
  * @action: ...
  *
  * Return: ...
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *arr = array + size - 1;

	if (array != NULL && action != NULL && size > 0)
	{
		while (arr < size)
		{
			action(array[arr]);
			arr++;
		}
	}
}
