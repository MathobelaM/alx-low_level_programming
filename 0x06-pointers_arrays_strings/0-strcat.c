/**
 * _strncat - concatenates two strings.
 *
 * @dest: input param
 * @src*: input param
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
