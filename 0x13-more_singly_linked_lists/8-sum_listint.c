#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: result
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *c = head;
while (c != NULL)
{
sum += c->n;
c = c->next;
}
return (sum);
}
