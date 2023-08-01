#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * if the node does not exist, return NULL
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;
		i++;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
