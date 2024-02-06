#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = *head;
	head = new;
	return (new);
}
