#include "main.h"
/**
 * print_numbers - prints the numbers followed by a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
