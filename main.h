#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int prnt_char(va_list the_list);
int prnt_str(va_list the_list);

#endif
