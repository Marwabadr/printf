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
 * printChar - printCharacter
 * @char_arg: valist var
 * Return: returns 1
 */
int printChar(va_list char_arg)
{
	_putchar(va_arg(char_arg, int));
	return (1);

}
/**
 * printString - printString
 * @string_arg: string valist var
 * Return: returns i else 6 if NUll
 */
int printString(va_list string_arg)
{
	char *stringPtr;
	int i;

	stringPtr = va_arg(string_arg, char*);
	if (stringPtr == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (i = 0; stringPtr[i] != '\0'; i++)
		{
			_putchar(stringPtr[i]);
		}
	}
	return (i);
}
/**
 * printNumbers - printNumber
 * @num_arg: valist number var
 * Return: returns cpt
 */
int printNumbers(va_list num_arg)
{

	long int num;
	int cpt, avar, bs;

	cpt = 0;
	num = va_arg(num_arg, int);

	if (num < 0)
	{
		num *= -1;
		_putchar(45);
		cpt++;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		cpt++;
	}
	if (num > 9)
	{
		bs = 10;

		while (num / bs > 9)
		{
			bs *= 10;
		}

		while (bs > 0)
		{
			avar = num / bs;
			num = num % bs;
			_putchar(avar + 48);
			bs = bs / 10;
			cpt++;
		}
	}
	return (cpt);
}
