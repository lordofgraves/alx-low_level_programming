#include "main.h"

/**
 * array_range - create an array of integers containing a range of values
 * @min: the lower bound (included)
 * @max: the upper bound (included)
 *
 * Return: If memory allocation fails or max is less than max, return NULL.
 * Otherwise, return the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
        int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = min - max +1;
	arr = (int *) malloc(size * sizeof(int));
        if (arr == NULL) 
	{
		return (NULL);
        }
        for (i = 0; i < size; i++) 
	{
		arr[i] = min + i;
        }
	return (arr);
}

