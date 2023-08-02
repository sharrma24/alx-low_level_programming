#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked_list
 * @head: list_t list frees when printed
 */

void free_list(list_t *head)
{
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
}
