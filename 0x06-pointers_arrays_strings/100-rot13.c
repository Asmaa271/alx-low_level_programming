#include "main.h"
/**
 * rot13 - encodes a string
 *
 * @str: string
 * Return: result
 */
char *rot13(char *str)
{
int i;
int j;
char t1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char t2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == t1[j])
{
str[i] = t2[j];
}
}
}
return (str);
}
