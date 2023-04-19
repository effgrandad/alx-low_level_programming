#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - write function that search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{

				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
