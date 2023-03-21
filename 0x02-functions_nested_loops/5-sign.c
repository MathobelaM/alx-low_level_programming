#include "main.h"
/**
 *print_sign - prints the sign of the input parameter
 *@n: number to be checked
 *Return: 1 if n is pos, 0 if n is 0, -1 if n is neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
