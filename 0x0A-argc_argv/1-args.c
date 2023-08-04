#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
