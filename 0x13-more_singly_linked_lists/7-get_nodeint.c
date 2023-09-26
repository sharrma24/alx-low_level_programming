#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a certain index in the  linked list
 * @head: first node in the linked list
 * @index: index of the node to the  return
 *
 * Return: pointer to the node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
