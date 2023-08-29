#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
listint_t *current, *n;
if (head == NULL)
return;
current = *head;
while (current != NULL)
{
n = current->next;
free(current);
current = n;
}
*head = NULL;
}
