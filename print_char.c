#include "main.h"
/**
 * print_char - prints a single character
 * @c: character to be printed
 * @count: Counter
 *
 * Return: 1 (success)
 */
int print_char(char c, int count)
{
	count = 0;
	_putchar(c);
	count++;
	return (count);
}
