#include "main.h"
/**
 * print_rev - entry point
 * @s: paramter of function
 */
void print_rev(char *s)
{
	int i, count, j;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	for (j = s[count]; j >= s[0]; j--)
	{
		_putchar(s[j];
	}
}
