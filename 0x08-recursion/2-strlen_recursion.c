#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int l = 0;
if (*s)
{
l++;
l = l + _strlen_recursion(s + 1);
}
return (l);
}
