#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (cal_sqrt_recursion(n, 0));
}
/**
 * cal_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the result
 */
int cal_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (cal_sqrt_recursion(n, i + 1));
}
