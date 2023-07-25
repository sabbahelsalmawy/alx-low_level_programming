#include"main.h"
/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
        for (; *s != '\0'; s--)
                _putchar(*s + 0);
        _putchar('\n');
}
