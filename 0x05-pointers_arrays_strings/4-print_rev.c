#include "main.h"
/**
 * print_rev - entry point
 * @s: paramter of function
 */
void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while s[i] != '\0')
		i++;
	j = i;
	for (k = j - 1; k >= 0; k--)
		_putchar(s[j]);
	_putchar('\n');

}
