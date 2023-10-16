#include "main.h"
/**
 * _printf - function alike printf
 * @format: formatted string var
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	va_list vaList;
	unsigned int i = 0, cn  = 0;

	if (!format)
		return (-1);

	va_start(vaList, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				cn++;
				i++;
			}
			else if (f_printFunc(format[i + 1]) != NULL)
			{
				cn += (f_printFunc(format[i + 1]))(vaList);
				i++;
			}
			else
			{
				_putchar(format[i]);
				cn++;
			}
		}
		else
		{
			_putchar(format[i]);
			cn++;
		}
	}
	va_end(vaList);
	return (cn);
}

/**
 * f_printFunc - find print functions
 * @t: var
 * Return: returns 0
 */
int (*f_printFunc(const char t))(va_list)
{
	specStruct  printf[] = {
		{'c', printChar},
		{'s', printString},
		{'d', printNumbers},
		{'i', printNumbers},
		{'b', convertedIntToBinary},
		{'u', printUnsigned},
		{'o', printOctal},
	        {'x', printHexa},
		{'X', printHexaUppercase},
		{'\0', NULL}
	};

	int cpt;

	for (cpt = 0; printf[cpt].specPtr != '\0'; cpt++)
	{
		if (printf[cpt].specPtr == t)
		{
			return (printf[cpt].specFunc);
		}
	}

	return (0);
}
