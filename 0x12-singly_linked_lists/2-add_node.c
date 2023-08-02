#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  @str: addyin  new strings to the node
 *   add_node- in the linked_list it adds a new node at the begginning
 *    @head: Double pointers 
 *
 *    Return:  NULL if it fails or return the address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}	
