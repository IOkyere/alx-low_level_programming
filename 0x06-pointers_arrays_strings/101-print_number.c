#include "main.h"
#include <stdio.h>

/**
 * print_number -print number putchar
 * @n:integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num / 10) > 0)
		print_num(num / 10);

	putchar(num % 10 + '0');
}


