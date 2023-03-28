#include "main.h"
#include <stdarg.h>
/**
 * _printf - Prints formatted output to stdout
 *
 * @format: formatted text
 *
 * Return: Number of text elements outputted
 */
int _printf(const char *format, ...)
{
	va_list args;

	char c, *s;

	int count;

	count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					print_char(c);
					count++;
					break;
				case 's':
					s = va_arg(args, char *);
					print_string(s);
					count++;
					break;
				case '%':
					print_percent();
					count++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
