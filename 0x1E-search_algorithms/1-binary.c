#include "search_algos.h"

/**
 * binary_search - uses binary search to look for a value in an array
 * of sorted integers
 * @size: How many components are there in the array
 * @array: A pointer pointing to the array's first element to be searched
 * @value: a value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 * Description: Prints the [sub]array under search following each modification
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, rite;

	if (array == NULL)
		return (-1);

	for (left = 0, rite = size - 1; rite >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < rite; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (rite - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rite = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
