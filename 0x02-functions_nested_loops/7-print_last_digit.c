#include "main.h"

/**
 *print_last_digit - prints last digit of a number
 *@n: integer
 *Return: last digit of a number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	int last_dgt;

	last_dgt = n % 10;

	_putchar(last_dgt);
	return (last_dgt);
}
