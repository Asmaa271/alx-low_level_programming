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
unsigned int c = 0;
int j = 0;
while (*s)
{
j = 0;
for (unsigned int i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
c++;
j = 1;
break;
}
}
if (!j)
break;
s++;
}
return (c);
}
