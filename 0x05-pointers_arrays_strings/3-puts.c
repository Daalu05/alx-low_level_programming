#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 * Return: no return
 */
void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
