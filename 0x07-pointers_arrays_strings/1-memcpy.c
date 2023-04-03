/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination to put copied data
 * @src: destination to copy data from
 * @n: n bytes of @src
 *
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
