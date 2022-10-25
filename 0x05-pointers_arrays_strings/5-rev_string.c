#include "main.h"
/**
 * rev_string - entry point
 * @s: parameter of function
 */
void rev_string(char *s)
{
	int i, j, k;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
