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
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count = _switch(format, args, count);
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
