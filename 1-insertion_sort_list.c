#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list
 * in ascending order using insertion sort algorithm
 * @list: pointer to pointer to head node of list
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *start_node, *start_node_tmp;

	if (list == NULL || is_less_than_2_nodes(*list))
		return;

	start_node = (*list)->next; /* begin from 2nd node */
	while (start_node)
	{
		while (start_node->prev &&  (start_node->n < start_node->prev->n))
		{
			start_node_tmp = start_node;
			swap_nodes(list, start_node_tmp->prev, start_node_tmp);
			print_list(*list);
		}
		start_node = start_node->next;
	}
}


/**
 * swap_nodes - swap two nodes of a doubly linked list
 * @head: pointer to pointer to first node of list
 * @first_node: first node to swap with @second_nod
 * @second_node: second node to swap with @first_node
 *
 * Return: nothing
 */
void swap_nodes(listint_t **head, listint_t *first_node,
		listint_t *second_node)
{
	first_node->next = second_node->next;
	if (second_node->next)
		second_node->next->prev = first_node;

	second_node->prev = first_node->prev;
	if (first_node->prev)
		first_node->prev->next = second_node;

	first_node->prev = second_node;
	second_node->next = first_node;

	if (*head == first_node)
		*head = second_node;

}

/**
 * is_less_than_2_nodes -return true if a doubly linked list
 * contains less than 2 nodes
 * @list: head pointer
 *
 * Return: integer: 1 for true, 0 for false
 */
int is_less_than_2_nodes(listint_t *list)
{
	if (!list || !(list->next))
		return (1);

	return (0);
}
