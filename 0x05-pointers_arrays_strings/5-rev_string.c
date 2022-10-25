#include "main.h"
/**
 * rev_string - entry point
 * @s: parameter of function
 */
void rev_string(char *s)
{
	int i, c, l;
	char h;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
