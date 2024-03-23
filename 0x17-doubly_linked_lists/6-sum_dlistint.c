#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data(n)
 * of a `dlistint_t` linked list
 * @head: head of doubly linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	if (head == NULL)
		return sum;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
