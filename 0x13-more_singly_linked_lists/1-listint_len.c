#include <stdlib.h>
#include "lists.h"
/* struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * @h: linked list of type listint_t
 *  Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
