#include "main.h"

/**
 *_abs - returns the absolute value of the input argment
 *@n: integer
 *Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
