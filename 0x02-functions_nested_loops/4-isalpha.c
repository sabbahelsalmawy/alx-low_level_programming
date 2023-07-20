#include "main.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 * function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
*/
int _isalpha(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1);
		while (c >= 97 && c <= 122)
			return (1);
	}
}
