#include "main.h"
/**
 * jack_bauer - entry point
 */
void jack_bauer(void)
{
	int a = 0, b;
	
	while (a < 24)
	{
		b = 0;
		while ( b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
