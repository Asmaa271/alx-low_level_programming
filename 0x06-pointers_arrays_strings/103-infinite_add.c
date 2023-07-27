#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int k = 0, i = 0, j = 0, l = 0;
int v1 = 0, v2 = 0, t = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || k == 1)
{
if (i < 0)
v1 = 0;
else
v1 = *(n1 + i)-'0';
if (j < 0)
v2 = 0;
else
v2 = *(n2 + j)-'0';
t = v1 + v2 + k;
if (t >= 10)
k = 1;
else
k = 0;
if (l >= (size_r - 1))
return (0);
*(r + l) = (t % 10) + '0';
l++;
j--;
i--;
}
if (l == size_r)
return (0);
*(r + l) = '\0';
return (r);
}
