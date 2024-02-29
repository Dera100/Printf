#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf project assignment.
 *
 * @ph: type char pointer of the specifier of the code.
 *
 * @function: function for the code project
 *
 */

typedef struct format
{
	char *ch;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_point(va_list val);
int unsigned_int(va_list val);
int _strlenc(const char *s);
int _putchar(char c);
int print_HEXA(unsigned int num);
int print_exce(va_list val);
int print_hexa(va_list val);
int print_octa(va_list val);
int print_binn(va_list val);
int print_revse(va_list args);
int print_rot13e(va_list args);
int print_m(va_list args);
int print_dc(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_27(void);
int print_m(va_list val);
int print_s(va_list val);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenco(const char *s);
int print_HEXE(unsigned int num);
int print_excs(va_list val);
int print_cc(va_list val);
#endif
