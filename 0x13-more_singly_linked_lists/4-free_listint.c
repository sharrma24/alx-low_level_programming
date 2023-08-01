#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * Functionality that sets head to NULL
 *void free_listint2
 * Return: Always 0.
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
