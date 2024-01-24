#include "sort.h"

/*
 * insertion_sort_list - a function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: the pointer to the head of the doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *curr;
	int key, value;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

