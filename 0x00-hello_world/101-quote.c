#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a message to standard error
 * Return: returns one
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
60);
	return (1);
}
