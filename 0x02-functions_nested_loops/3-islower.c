#include "main.h"
/**
 *_islower- takes a byte/num/char and checks if its lowercase
 *@c: number to be checked
 *Return: 1 if num is lowercase or else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
