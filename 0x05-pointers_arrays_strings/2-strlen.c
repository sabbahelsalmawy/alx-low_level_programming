#include"main.h"
/**
 * strlen - is function calclate the returns the length of a string.
 * @s is pointer string value
 * @s is character 
 */

int _strlen(char *s)
{
	int x = 0;

	for (;(*s != '0');)
		x++;
		return (x);
}
