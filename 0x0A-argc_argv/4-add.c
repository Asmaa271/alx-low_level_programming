#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1;
int j;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
