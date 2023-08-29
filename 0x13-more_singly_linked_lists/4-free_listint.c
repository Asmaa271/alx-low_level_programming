#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
listint_t *current, *next_node;
current = head;
while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
