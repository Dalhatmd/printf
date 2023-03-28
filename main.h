#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
int _putchar(char);
int _printf(const char *format, ...);
int print_string(char *s, int count);
int print_char(char c, int count);
int print_percent(void);
int print_int(int, int);
int _switch(const char *, va_list, int);

#endif /* MAIN_H */
