#include "main.h"
/**
 * printUnsigned - printUnsignedInt
 * @unsign_arg: unsigned argument
 * Return: returns cpt
 */
int printUnsigned(va_list unsign_arg)
{
	unsigned int unsign = va_arg(unsign_arg, unsigned int);

	int cpt = 0;

	if (unsign == 0)
	{
		_putchar('0');
		return (1);
	}
	while (unsign > 0)
	{
		int digit = unsign % 10;

		_putchar('0' + digit);
		unsign /= 10;
		cpt++;
	}
	return (cpt);
}
