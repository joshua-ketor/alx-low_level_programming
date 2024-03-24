#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * This function sets the `head` to `NULL`
 * @head: pointer to pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
