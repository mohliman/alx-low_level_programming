#include "main.h"
/**
 * print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
	{
		for (a = 'a'; a < 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
