#include <stdio.h>

/**
 *multiples- computes and prints the sum
 *of all the multiples of 3 or 5 below 1024 (excluded)
 *followed by a  new line
 *Return: sum
 */

int multiples(void)
{
	int i;
	int pro;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			pro += i;
		}
	}
	printf(pro);
	return (pro);
}
