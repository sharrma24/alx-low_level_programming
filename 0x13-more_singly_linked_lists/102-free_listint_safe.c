#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * size_t free_listint_safe(listint_t **h)
 * Return: The freed size of list
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return(0); 
/**
 * size_t free_listint_safe(listint_t **h)
 * Return: NULL if there is no loop, or the address
 */

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
