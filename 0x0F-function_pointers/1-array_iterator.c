#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function given as
 * parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: function of a pointer to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;

	while (size-- > 0)
	{
		action(array[i]);
		i++;
	}
}
