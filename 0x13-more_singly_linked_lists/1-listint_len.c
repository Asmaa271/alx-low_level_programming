#include <stddef.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
