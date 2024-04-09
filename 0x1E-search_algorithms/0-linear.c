#include "search_algos.h"

/**
 * linear_search - uses linear search to look for a value in an array of numbers
 * @size: How many components are there in the array
 * @array: A pointer pointing to the array's first element to be searched
 * @value: a value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 * Description: prints a value each time a comparison is made within the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t f = 0;

	if (array == NULL)
		return (-1);

	for (; f < size; f++)
	{
		printf("Value checked array[%ld] = [%d]\n", f, array[f]);
		if (array[f] == value)
			return (f);
	}

	return (-1);
}
