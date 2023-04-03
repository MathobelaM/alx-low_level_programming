/**
 * _strchr - searches for a char in a string
 *
 * @s: pointer of type char
 * @c: char to search for
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
