#include "search_algos.h"

/**
 * advanced_binary_recursive - uses binary search to search recursively
 * for a value in a sorted array of integers
 * @array: A pointer pointing to the array's first element to be searched
 * @left: The index of the [sub]array to search from the start
 * @right: the [sub]array to search's terminating index
 * @value: the value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 * Description: Prints the [sub]array being searched after each change
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - employs advanced binary search to look for a value
  * in a sorted array of integers
  * @size: How many components are there in the array
  * @array: A pointer pointing to the array's first element to be searched
  * @value: a value searched for
  * Return: -1 if either the value is absent or the array is NULL.
  * In the absence of such, the value's first index
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
