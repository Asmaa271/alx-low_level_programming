#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node, starting at 0
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *c = head;
while (c != NULL)
{
if (count == index)
return (c);
c = c->next;
count++;
}
return (NULL);
}
