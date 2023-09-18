#include "main.h"
/**
  * _printf - the fun of alx project
  * @format: a var to be declared
  * Return: the wanted text
  */
int _printf(const char *format, ...)
{
int intia_var = 0;
va_list the_list;
if (!format)
return (-1);
va_start(the_list, format);
while (*format)
{
if (*format != '%')
{
fputchar(*format, stdout);
intia_var++;
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(the_list, int);
fputchar(c, stdout);
intia_var++;
}
else if (*format == 's')
{
char *new_str = va_arg(the_list, char *);
int str = strlen(new_str);
fputchar(new_str, stdout, str);
intia_var += str;
}
else if (*format == '%')
{
fputchar("%", stdout);
intia_var++;
}
}
format++;
}
va_end(the_list);
return (intia_var);
}
