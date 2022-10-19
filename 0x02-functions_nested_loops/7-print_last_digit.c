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
		last_num = n % 10;
		_putchar(last_num + '0');
	}
	else
	{
		last_num = n % 10;
		_putchar(last_num + '0');
	}

	return (last_num);
}
