#include "main.h"
/**
 * _putchar - write chars
 * @c: valist variable
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printUnsigned - print Unsigned Int
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

/**
 * printOctal - print Number Octal
 * @oct_arg: octal argument
 * Return: returns cmpt
 */

int printOctal(va_list oct_arg)
{
    unsigned int var = va_arg(oct_arg, unsigned int);
    int cmpt = 0;

    if (var == 0)
    {
        _putchar('0');
        return 1;
    }

    while (var > 0)
    {
        int test = var % 8;
        _putchar('0' + test);
        var /= 8;
        cmpt++;
    }

    return cmpt;
}

/**
 * printHexa - print Number Hexadecimal
 * @hexa_arg: hexadecimal argument
 * Return: returns cmpt
 */
int printHexa(va_list hexa_arg)
{
    unsigned int numb = va_arg(hexa_arg, unsigned int);
    int cmpt = 0;

    if (numb == 0)
    {
        _putchar('0');
        return 1;
    }

    while (numb > 0)
    {
        int test = numb % 16;
        if (test < 10)
            _putchar('0' + test);
        else
            _putchar('a' + test - 10);
        numb /= 16;
        cmpt++;
    }

    return cmpt;
}

/**
 * printHexaUppercase - print Hexadecimal Uppercase
 * @hexaUp_arg: hexadecimal argument
 * Return: returns cmpt
 */
int printHexaUppercase(va_list hexaUp_arg)
{
    unsigned int numb = va_arg(hexaUp_arg, unsigned int);
    int cmpt = 0;

    if (numb == 0)
    {
        _putchar('0');
        return 1;
    }

    while (numb > 0)
    {
        int test = numb % 16;
        if (test < 10)
            _putchar('0' + test);
        else
            _putchar('A' + test - 10);
        numb /= 16;
        cmpt++;
    }

    return cmpt;
}
