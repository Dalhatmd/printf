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
	int count = 0, len = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			len = _switch(format + 1, args);
			if (len == -1)
				return (-1);
			count += len;
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
