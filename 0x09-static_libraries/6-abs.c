#include "main.h"
/**
 *_abs - Check Main
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */

int _abs(int r)
{
	if (r < 0)
		r = (r * -1);
	return (r);
}
