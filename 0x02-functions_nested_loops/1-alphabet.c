#include "main.h"
/**
 *print_alphabet- prints alphabets in lowercase
 *from a to z
 *Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
