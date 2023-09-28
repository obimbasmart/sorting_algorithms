#include "sort.h"

/**
 * quick_sort - sort an array of integers using the quick
 * sort algorithm
 * @array: array of integers
 * @size: size of @array
 *
 * Return: nothing := sort in place
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - recursive quick sort function
 * sort an array of integers using the quick sort algorithm
 * @array: array of integers
 * @start: start of array
 * @end: end of array
 * @size: size of @array
 *
 * Return: nothing
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	int partition_index = start;

	if (start >= end)
		return;

	partition_index = partition(array, start, end, size);
	quick_sort_recursive(array, start, partition_index - 1, size);
	quick_sort_recursive(array, partition_index + 1, end, size);
}

/**
 * partition - partition an array using Lomuto partition scheme
 * @array: array of integers
 * @start_index: start index of partition
 * @end_index: end index of partition
 * @size: size of array
 *
 * Return: partition index
 */
int partition(int *array, int start_index, int end_index, size_t size)
{
	int partition_index, pivot, index;

	pivot = array[end_index];
	partition_index = start_index;

	for (index = start_index; index < end_index; index++)
	{
		if (pivot >= array[index])
		{
			swap_elements(array, index, partition_index);
			partition_index += 1;
		}
	}
	swap_elements(array, end_index, partition_index);
	print_array(array, size);
	return (partition_index);
}

/**
 * swap_elements - swap two elements based on index
 * @array: pointer to original array
 * @index_1: the first element index
 * @index_2: the second element index
 *
 * Return: nothing
 */
void swap_elements(int *array, size_t index_1, size_t index_2)
{
	int temporary_integer = array[index_1];

	array[index_1] = array[index_2];
	array[index_2] = temporary_integer;
}
