#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char c = 'w';
  char *str = "Eno";
  int m = _printf("Name is %c %s is the first item", c, str);
  printf("\n%d", m);

  return (0);
}