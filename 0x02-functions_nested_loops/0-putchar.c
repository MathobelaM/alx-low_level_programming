#include "main.h"
/**
 *main- print _putchar on stdout
 *followed by new line
 *Return: 0
 */

int main(void)
{
char[] str = "_putchar";
int i;

for (i = 0; i < strlen(str); i++)
{
char current = str[i];
_putchar(current);
}

_putchar("\n");
return (0);
}
