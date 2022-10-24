#include "main.h"
/**
 * print_rev - entry point
 * @s: paramter of function
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; '\0' >= s[i]; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
