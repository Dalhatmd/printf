#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints the string pointed by format to stdout
 * @format: The pointer to thestring to print
 *
 * Return: Number of characters printed or -1 on error
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		print_string(args, count);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			count = _switch(format + 1, args, count);
			format++;
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
