#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function to adds a new node at the end of a lists
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added as a new element
 *
 * Return: result
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *c;
if (str == NULL)
return (NULL);
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
n->len = strlen(str);
n->next = NULL;
if (*head == NULL)
{
*head = n;
}
else
{
c = *head;
while (c->next != NULL)
c = c->next;
c->next = n;
}
return (n);
}
