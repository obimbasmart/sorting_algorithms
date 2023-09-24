#include "sort.h"

/**
* bubble_sort - sort an array of integers using bubble sort algorithm
* @array: array of integers
* @size: size of array
*
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t index, num_of_elem;

	for (num_of_elem = size; num_of_elem > 0; num_of_elem--)
	{
		for (index = 0; index < num_of_elem - 1; index++)
		{
			if (array[index] > array[index + 1])
				swap_elements(array, index, index + 1);

			print_array(array, size);
		}
	}
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
