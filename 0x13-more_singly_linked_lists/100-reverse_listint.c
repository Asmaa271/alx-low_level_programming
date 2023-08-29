#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to a pointer to the head of the linked list
 * Return: result
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL, *c = *head, *n;
while (c != NULL)
{
n = c->next;
c->next = prv;
prv = c;
c = n;
}
*head = prv;
return (*head);
}
