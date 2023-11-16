#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - main struct
 * @ps: pointer
 * @functtion: function
 */

typedef struct format
{
	char *id;
	int (*function)();
}formit;

int _putchar(char c);
int _printf(const char *format, ...);
void print_formit(char formit[], int *form_ind);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlent(const char *str);
int print_percen(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_bin(va_list val);
int printf_unisgned(va_list args);
int print_o(va_list val);
int printf_x(va_list val);
int printf_X(va_list val);
int print_X_t(unsigned int num);
int printf_ts(va_list val);
int print_x_t(unsigned long int num);
int printf_pointer(va_list val);
int printf_r(va_list val);
int printf_rot(va_list val);

#endif

