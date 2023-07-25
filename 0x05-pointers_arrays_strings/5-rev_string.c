#include"main.h"




void rev_string(char *s)
{
	for (; *s != '\0'; s--)
		_putchar(*s + 0);
	_putchar('\n');
}
