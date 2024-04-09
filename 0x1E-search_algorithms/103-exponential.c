#include "search_algos.h"

/**
 * _binary_search - employs binary search to look for a value
 * in an array of sorted numbers
 * @size: How many components are there in the array
 * @array: A pointer pointing to the array's first element to be searched
 * @value: a value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 * Description: displays the [sub]array searched after each alter
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - applies an exponential search to find
  * a value in a sorted array of numbers
  * @size: How many components are there in the array
  * @array: A pointer pointing to the array's first element to be searched
  * @value: a value searched for
  * Return: -1 if either the value is absent or the array is NULL.
  * In the absence of such, the value's first index
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
