#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: result
 */
int get_endianness(void)
{
unsigned int num = 1;
unsigned char *check_endian = (unsigned char *)&num;
return (*check_endian);
}
