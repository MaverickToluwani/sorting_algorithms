#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order
 * @array: Array to be sorted
 * @size: Size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, swp, idx, key;

	for (i = 0; i < size; i++)
	{
		key = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				if (array[j] < array[key])
					key = j;
			}
		}
		if (key != i)
		{
			swp = array[i];
			array[i] = array[key];
			array[key] = swp;
			for (idx = 0; idx < size; idx++)
			{
				if (idx == size - 1)
					printf("%d", array[idx]);
				else
					printf("%d, ", array[idx]);
			}
			printf("\n");
		}
	}
}
