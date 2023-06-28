#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* FUNCTIONS */
int _printf(const char *format, ...);
int choose_f(char c, va_list args);
int convert_to_base(va_list args, int b, char format);
int _putchar(char c);
int get_size(unsigned int n, int b);
int check_hex_format(int rem, char f);
int cvt_hex(unsigned long int c, char f);
int print_int(va_list args);
int print_percent(int one);
int print_char(va_list args);
int print_str(va_list args);
int print_unknown(char c);
int print_rstr(va_list args);
int print_rot13_str(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_string(va_list args);
int print_address(va_list args);

#endif /* main.h */
