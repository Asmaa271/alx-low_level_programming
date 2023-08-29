#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node’s data
 * @head: pointer to a pointer to the head of the linked list
 * Return: result
 */
int pop_listint(listint_t **head)
{
int d;
listint_t *t;
if (head == NULL || *head == NULL)
return (0);
t = *head;
d = t->n;
*head = (*head)->next;
free(t);
return (d);
}
