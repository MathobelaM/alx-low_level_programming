#include <stdio.h>

/**
 *print_to_98 - prints numbers from n
 *to 98
 *@n: integer to start printing from
 *Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", 98);
}
