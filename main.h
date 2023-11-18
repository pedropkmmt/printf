#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int print_char(va_list types, char buffer[],int flags, int width, int precision, int size)
int print_percent(va_list types, char buffer[],int flags, int width, int precision, int size)

#endif
