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
void print_buffer(char buffer[], int *buff_ind);


#endif

