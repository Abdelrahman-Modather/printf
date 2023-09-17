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
while (format && *format)
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
int strvlen = 0;
while(new_str[strvlen]){
strvlen++;
}
write(1, new_str, strvlen);
intia_var += strvlen;
}
else if (*format == '%')
{
write(1, "%", 1);
write(1 format, 1);
intia_var += 2;
}
}
format++;
}
va_end(the_list);
return (intia_var);
}
