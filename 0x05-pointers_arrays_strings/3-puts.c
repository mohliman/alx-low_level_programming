#include "main.h"
#include <stdio.h>
/**
 * _puts - entry point
 * @str: parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < str; i++)
	{
		_putchar(str[i]);
	}
}
