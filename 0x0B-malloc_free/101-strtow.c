#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string
 *
 * Return: result
 */
int count_word(char *s)
{
int n, y, x;
n = 0;
x = 0;
for (y = 0; s[y] != '\0'; y++)
{
if (s[y] == ' ')
n = 0;
else if (n == 0)
{
n = 1;
x++;
}
}
return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: result
 */
char **strtow(char *str)
{
char **m, *tmp;
int i, k = 0, len = 0, w, c = 0, s, e;
while (*(str + len))
len++;
w = count_word(str);
if (w == 0)
return (NULL);
m = (char **) malloc(sizeof(char *) * (w + 1));
if (m == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
e = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (s < e)
*tmp++ = str[s++];
*tmp = '\0';
m[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
s = i;
}
m[k] = NULL;
return (m);
}
