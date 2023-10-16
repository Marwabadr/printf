#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct specStruct -  structure that helps specifie the function printf
 * @specPtr: pointer
 * @specFunc : function pointer
 */
typedef struct specStruct
{
	char specPtr;
	int (*specFunc)(va_list);
} specStruct;

int _putchar(char c);
int _printf(const char *format, ...);
int printChar(va_list char_arg);
int printString(va_list string_arg);
int (*f_printFunc(const char t))(va_list);
int printNumbers(va_list num_arg);
int convertedIntToBinary(va_list inter);

#endif
