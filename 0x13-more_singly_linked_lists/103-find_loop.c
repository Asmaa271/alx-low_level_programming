#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: result
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s = head, *f = head;
while (s && f && f->next)
{
s = s->next;
f = f->next->next;
if (s == f)
{
s = head;
while (s != f)
{
s = s->next;
f = f->next;
}
return (s);
}
}
return (NULL);
}
