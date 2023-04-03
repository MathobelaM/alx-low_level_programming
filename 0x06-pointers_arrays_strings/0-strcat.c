/**
 * _strcat - concatenates two strings.
 *
 * @dest: input param
 * @src: input param
 *
 * Return: string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	
	while (dest[i])
		i++;

	for (j = 0; src[j] ; j++)
		dest[i++] = src[i];

	return (dest);
}
