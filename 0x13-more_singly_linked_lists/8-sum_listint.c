#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n) of a `listint_t`\
 * linked list
 * @head: pointer to head node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
