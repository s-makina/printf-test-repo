#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFF_SIZE 1024

/* PRINT FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

#include <stdio.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);
int print_handler(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

#endif
