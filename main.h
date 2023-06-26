#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* FUNCTIONS */
int _printf(const char *format, ...);
int choose_f(char c, va_list args);
int print_int(va_list args);
int print_percent(int one);
int print_char(va_list args);
int print_str(va_list args);
int print_unknown(char c);
int print_rstr(va_list args);
int print_rot13_str(va_list args);

#endif /* main.h */
