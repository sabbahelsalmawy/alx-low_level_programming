#include <unistd.h>
#include "main.h"
/**
 * descreption: _putchar - is print the character x that have one alpha
 *
 * @x: is chracter to be print one character is print pear one line
 * Return: 1 -  is success
 * when return -1 is error in code
*/
int _putchar(char x)
{
	return (write(1, &x, 1));
}
