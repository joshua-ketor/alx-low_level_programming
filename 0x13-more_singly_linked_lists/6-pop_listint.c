#include "lists.h"

/**
 * pop_listint - delete the head node of a `listint_t` linked list
 * @head: pointer to pointer to head
 *
 * Return: the head node's data(n), otherwise 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
