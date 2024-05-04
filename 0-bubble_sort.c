#include "sort.h"

/**
 * bubble_sort - sorts an array from ascending order
 * @array: Array tobe sorted
 * @size: lenght of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swp;
				print_array(array, size);
			}
		}
	}
}
