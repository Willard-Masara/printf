#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * put_string - The string to evaluate/read though.
 * @str: string to input
 * Return: void
 */

void put_string(const char *str)
{
while (*str != '\0')
putchar (*str);
str++;
}
/**
 * our_printf - initialize to move pass special sign
 * @format: format
 */
void our_printf(const char *format, ...)
{
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
}
if (*format == 'c')
{
int ch = va_arg(args, int);
putchar(ch);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
puts(str);
}
else if (*format == '%')
{
putchar('%');
}
else
{
putchar(*format);
}
format++;
}
va_end(args);
}
