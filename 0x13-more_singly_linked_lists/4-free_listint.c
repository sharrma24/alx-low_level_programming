#include "lists.h"

/**
 * free_listint - free the  a linked list
 * @head: listint_t list free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
