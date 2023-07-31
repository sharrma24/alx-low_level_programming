#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the numbers of an  elements in a linked_ list
 * @h: pointer to the list_t list
 *
 * Return:The  numbers of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
