#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - display last digit.
 * @x:integer.
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	int m, d;

	m = x % 8;

	if (m < 0)
	{
		m = -m;
	}
	d = '0' + m;
	_putchar(d);

	return (m);
}
