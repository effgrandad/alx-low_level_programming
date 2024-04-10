#include "search_algos.h"

/**
 * interpolation_search - applies an interpolation search to find a value
 * within a sorted array of integers
 * @size: How many components are there in the array
 * @array: A pointer pointing to the array's first element to be searched
 * @value: a value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t f, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		f = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (f < size)
			printf("Value checked array[%ld] = [%d]\n", f, array[f]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", f);
			break;
		}

		if (array[f] == value)
			return (f);
		if (array[f] > value)
			r = f - 1;
		else
			l = f + 1;
	}

	return (-1);
}
