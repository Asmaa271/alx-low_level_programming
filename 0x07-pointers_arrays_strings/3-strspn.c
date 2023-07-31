#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer
 * @accept: Pointer to the characters that are considered acceptable
 *
 * Return: The result
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
return (j);
}
s++;
}
return (j);
}
