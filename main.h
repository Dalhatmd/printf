#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _putchar(char);
int _printf(const char *format, ...);
int print_string(va_list args, int count);
int print_char(va_list args, int count);
int print_percent(void);
int _switch(const char *, va_list);
int print_int(va_list num, int count);
int print_binary(unsigned int num);
int handle_default(const char *str);

#endif /* MAIN_H */
