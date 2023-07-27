#include "main.h"
/**
 * rot13 - encodes a string
 *
 * @str: string
 * Return: result
 */
char *rot13(char *str)
{
char *ptr = str;
int i, j;
char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char t2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == t1[j])
{
str[i] = t2[j];
break;
}
}
}
return (ptr);
}
