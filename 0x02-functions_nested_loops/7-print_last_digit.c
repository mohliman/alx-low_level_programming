#include "main.h"
/**
 * print_last_digit - outputs last digit of a number
 * Return: last digit
 * @n: parameter of function
 */
int print_last_digit(int n)
{
	int last_num;

	if (n < 0)
	{
		n = -n;
	}
	last_num = n % 10;

	if (last_num < 0)
	{
		last_num = -last_num;
	}
	_putchar(last_num + '0');
	return (last_num);
}
