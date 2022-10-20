#include "main.h"
/**
 * more_numbers - entry point
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		_putchar(49);
		_putchar(48);
		_putchar(49);
		_putchar(49);
		_putchar(49);
		_putchar(50);
		_putchar(49);
		_putchar(51);
		_putchar(49);
		_putchar(52);
		_putchar('\n');
	}
}
