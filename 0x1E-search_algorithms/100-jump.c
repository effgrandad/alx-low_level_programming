#include "search_algos.h"

/**
 * jump_search - employs jump search to look for a value in an integer
 * array that has been sorted
 * @size: How many components are there in the array
 * @array: A pointer pointing to the array's first element to be searched
 * @value: a value searched for
 * Return: -1 if either the value is absent or the array is NULL.
 * In the absence of such, the value's first index
 * Description: prints a value each time a comparison is made within the array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
