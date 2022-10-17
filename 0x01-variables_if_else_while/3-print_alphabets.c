#include <stdio.h>
/**
 * main - prints alphabets in lower and upper case
 * Return: zero
 */
int main(void)
{
	char i;
	char a;

	for (i = 'a'; i < 'z'; i++)
		printf("%c", i);
	for (a = 'A'; a < 'Z'; a++)
		printf("%c", a);
	printf("/n");
	return (0);
}
