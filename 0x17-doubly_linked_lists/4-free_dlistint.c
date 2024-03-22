#include "lists.h"

/**
 * void free_dlistint - free a `dlistint_t` list
 * @head: doubly linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
