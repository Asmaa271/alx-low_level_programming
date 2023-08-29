#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
count++;
if (current == loop_node)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
if (count == 2 || count % 2 == 0)
loop_node = loop_node ? loop_node->next : head;
}
return (count);
}
