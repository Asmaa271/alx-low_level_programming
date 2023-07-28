#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k, l, m, o, a = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
if (i >= j)
l = i;
else
l = j;
if (size_r <= l + 1)
return (0);
r[l + 1] = '\0';
i--, j--, size_r--;
m = *(n1 + i)-48, o = *(n2 + j)-48;
while (l >= 0)
{
k = m + o + a;
if (k >= 10)
a = k / 10;
else
a = 0;
if (k > 0)
*(r + l) = (k % 10) + 48;
else
*(r + l) = '0';
if (i > 0)
i--, m = *(n1 + i)-48;
else
m = 0;
if (j > 0)
j--, o = *(n2 + j)-48;
else
o = 0;
l--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
