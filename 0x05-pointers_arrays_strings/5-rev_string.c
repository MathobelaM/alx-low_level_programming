/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: void
*/

void rev_string(char *s)
{
	int len, i;
	char ch;

	for (len = 0; s[len] != '\0'; ++l)
		;

	for (i = 0; i < len / 2; ++i)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
