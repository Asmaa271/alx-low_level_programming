#include "main.h"
/**
 * is_prime_recursive - function to check if a number is prime recursively
 * @n: number to be checked
 * @d: current divisor to check if n is divisible
 *
 * Return: result
 */
int is_prime_recursive(int n, int d)
{
if (d == 1)
{
return (1);
}
if (n % d == 0 && d > 0)
{
return (0);
}
return (is_prime_recursive(n, d - 1));
}
/**
 * is_prime_number - returns 1 if the input is prime
 * @n: number to be checked
 *
 * Return: result
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_recursive(n, n - 1));
}
