#include "main.h"
/**
 * _isalpha - entry point
 * @c: argument
 * Return: one or zero
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
