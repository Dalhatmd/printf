#include "main.h"

/**
 * _switch - Switch function to check for specifiers
 * @str: pointer to string
 * @args: Arguments passed into function
 * @count: Counter for printed characters
 *
 * Return: Counter
 */
int _switch(const char *str, va_list args, int count)
{
	int n;
	char c, *s;

	switch (*str)
	{
		case 'c':
			c = va_arg(args, int);
			count += print_char(c, count);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(null)";
			count += print_string(s, count);
			break;
		case '%':
			count += print_percent();
			break;
		case 'd':
		case 'i':
			n = va_arg(args, int);
			count = print_int(n, count);
			break;
		default:
			_putchar(*(str - 1));
			count++;
			_putchar(*str);
			count++;
			break;
	}

	return (count);
}
