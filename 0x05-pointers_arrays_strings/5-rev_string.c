#include "main.h"
/**
 * rev_string - entry point
 * @s: parameter of function
 */
void rev_string(char *s)
{
	int i, j, count;

	count = 0;
	for (i = 0; s >= '\0'; i++)
	{
		count += 1;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
