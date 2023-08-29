#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * a given index in a linked list
 * @head: pointer to a pointer to the head of the linked list
 * @index: index
 * Return: result
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *c, *t;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
t = *head;
*head = (*head)->next;
free(t);
return (1);
}
c = *head;
for (i = 0; c != NULL && i < index - 1; i++)
c = c->next;
if (c == NULL || c->next == NULL)
return (-1);
t = c->next;
c->next = t->next;
free(t);
return (1);
}
