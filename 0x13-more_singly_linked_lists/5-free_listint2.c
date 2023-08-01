#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *void free_listint2(listint_t **head)
 *Head to NULL
 */
	void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
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
