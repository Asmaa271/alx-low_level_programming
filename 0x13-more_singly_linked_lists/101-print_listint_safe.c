#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head of the linked list
 * Return: result
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *s = head, *f = head;
size_t c = 0;
while (f != NULL && f->next != NULL)
{
printf("[%p] %d\n", (void *)s, s->n);
s = s->next;
f = f->next->next;
if (s == f)
{
printf("[%p] %d\n", (void *)s, s->n);
c++;
break;
}
c++;
}
while (c > 0)
{
printf("-> [%p] %d\n", (void *)head, head->n);
head = head->next;
c--;
}
return (c);
}
