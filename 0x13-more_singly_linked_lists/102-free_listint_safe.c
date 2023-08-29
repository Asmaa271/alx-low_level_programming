#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: result
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
current = *h;
while (current != NULL)
{
count++;
if ((void *)current <= (void *)current->next)
{
*h = NULL;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
count++;
}
return (count);
}
temp = current;
current = current->next;
free(temp);
}
*h = NULL;
return (count);
}
