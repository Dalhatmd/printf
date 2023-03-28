#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints the string pointed by format to stdout
 * @format: The pointer to thestring to print
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str;
	int count = 0, n;
	va_list args;

	va_start(args, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					while (*str != '\0')
					{
						putchar(*str);
						count++;
						str++;
					}
					break;
				case 'd':
				case 'i':
					n = va_arg(args, int);
					count = print_int(n, count);
					break;
				default:
					putchar(*format);
					count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
