#include"main.h"
 /**
  * puts - prints a string, followed by a new line,
  * @str: pointer to the string to print
  * Return: void
*/

void _puts(char *str)
{
	for (;*str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
