#ifndef SORT_H
#define SORT_H

/** builtins libs */
#include <stdio.h>

/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** utility functions **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_elements(int *array, size_t, size_t);
void swap_nodes(listint_t **head, listint_t *, listint_t *);
int is_less_than_2_nodes(listint_t *list);
int partition(int *array, int start, int end, size_t size);
void quick_sort_recursive(int *array, int start, int end, size_t);

/** sorting functions **/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /** SORT_H **/
