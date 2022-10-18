#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

#endif
