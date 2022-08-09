#include "main.h"
#include <stdarg.h>



/**
 * _printf - Replicates the printf function
 * in C.
 *
 * @format: format string
 *
 * Return: the count of characters in the
 * format passed as an argument.
 */

int _printf(const char *format, ...)
{
int count = 0;
int i = 0;
va_list(args);
va_start(args, format);


while (format && format[i] != '\0')
{
if (format[i] != '%')
{
count += _putchar(format[i]);
i++;
}
else
{
if (format[i + 1] != " ")
{
switch (format[i + 1])
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
count += _print_string(va_arg(args, char *));
break;
case '%':
count += _putchar('%');
default:
break;
}
i += 2;
}
}
}
return (count);
}
