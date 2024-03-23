#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a `list_t` list
 * @head: pointer to pointer to head node
 * @str: node string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (n = 0; str[n] != '\0'; n++)
		;
	node->len = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}

	return (node);
}
