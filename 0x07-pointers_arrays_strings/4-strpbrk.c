#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of byte
 * @s: pointer to string
 * @accept: pointer to the bytes
 *
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *c = accept;
while (*c)
{
if (*s == *c)
{
return (s);
}
c++;
}
s++;
}
return (NULL);
}
