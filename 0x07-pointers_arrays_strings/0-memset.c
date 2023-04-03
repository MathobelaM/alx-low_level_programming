/**
 * _memset - adds values to the value at given memory
 *
 * @s: pointer to value of char type/array
 * @b: parameter of type char
 * @n: parameter of type int
 *
 * Return: A pointer to the filled memory
 *         area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
