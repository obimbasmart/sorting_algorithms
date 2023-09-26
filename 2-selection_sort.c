#include "sort.h"

/**
 * selection_sort - sort an array of integers using selection
 * sort algorithm
 * @array: array of integers
 * @size: size of @array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t smallest_integer_index, index, idx, needs_swapping;

	needs_swapping = 0;
	for (index = 0; index < size; index++)
	{
		smallest_integer_index = index;
		for (idx = index + 1; idx < size; idx++)
		{
			if (array[idx] < array[smallest_integer_index])
			{
				smallest_integer_index = idx;
				needs_swapping = 1;
			}
		}

		if (needs_swapping)
		{
			swap_elements(array, smallest_integer_index, index);
			print_array(array, size);
			needs_swapping = 0;
		}
	}
}

