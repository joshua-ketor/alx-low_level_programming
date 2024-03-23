#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
