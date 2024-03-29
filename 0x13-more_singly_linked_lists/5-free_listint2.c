#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t i*temp;

	if (head == NULL)
	return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
