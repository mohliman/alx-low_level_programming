#include "main.h"
/**
 * _isdigit - entry point
 * @c: parameter of function
 * Return: one or zero
 */
int _isdigit(int c)
{
	if (c >= 0  && c <= 9)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
