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
while (*format != '\0')
{
if (*format != '%')
{
write(1, format, 1);
intia_var++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == 'c')
{
char c = va_arg(the_list, int);
write(1, &c, 1);
intia_var++;
}
else if (*format == 's')
{
char *new_str = va_arg(the_list, char*);
int str = strlen(new_str);
write(1, new_str, str);
intia_var += str;
}
else if (*format == '%')
{
write(1, format, 1);
intia_var++;
}
}
format++;
}
va_end(the_list);
return (intia_var);
}
