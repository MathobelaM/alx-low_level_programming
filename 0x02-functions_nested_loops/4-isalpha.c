#include "main.h"
/**
 *_isalpha- checks if input arg is an alphabet
 *@c: character to be checked
 *Return: 1 if c is alpha otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
