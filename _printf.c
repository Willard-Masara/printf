#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int w;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
	return (-1);

	for (w = 0; format[w]; w++)
	{
	if (format[w] == '%')
	{
	switch (format[w + 1])
	{
	case 'c':
	_putchar(va_arg(args, int));
	count++;
	break;
	case 'd':
	case 'i':
	count += number_print(va_arg(args, int));
	break;
	case 's':
	count += str_print(va_arg(args, char *));
	break;
	case '%':
	_putchar('%');
	count++;
	break;
	default:
	_putchar(format[w + 1]);
	count++;
	break;
	}
	w++;
	}
	else
	{
	_putchar(format[w]);
	count++;
	}
}

    va_end(args);
    return (count);
}

