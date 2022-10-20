#include "main.h"
/**
 * print_most_numbers - entry point
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50)
		{
			continue;
		}
		if (a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
