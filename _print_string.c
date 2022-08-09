#include "main.h"

/**
 * _print_string - prints a string with
 * the _putchar function
 *
 * @str: string argument
 * Return: the number of characters in the
 * string
 */
int _print_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
