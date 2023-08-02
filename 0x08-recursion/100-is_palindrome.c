#include "main.h"
/**
 * is_palindrome_recursive - function to check palindrome
 * @s: the string
 * @st: the starting index
 * @e: the ending index
 *
 * Return: result
 */
int is_palindrome_recursive(char *s, int st, int e)
{
if (st >= e)
{
return (1);
}
if (s[st] != s[e])
{
return (0);
}
return (is_palindrome_recursive(s, st + 1, e - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 *
 * Return: result
 */
int is_palindrome(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (is_palindrome_recursive(s, 0, len - 1));
}
