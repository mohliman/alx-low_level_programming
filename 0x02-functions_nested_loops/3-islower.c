#include <stdio.h>
#include "main.h"
/**
 * _islower - entry point
 * @c: parameter of _islower function
 * Return: one or zero
 */
int _islower(int c)
{
	char check = islower(c);

	if (c == check)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
