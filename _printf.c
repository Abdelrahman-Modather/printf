#include "main.h"

/**
* print_char - the fun prints char
* @c: a char to be declared
* Return: the wanted text (always 1)
*/

static int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_str - the fun prints string
 * @strin: a string to be declared
 * Return: Number of char printed
 */
static int print_str(const char *strin)
{
	int cont = 0;

	while (*strin)
	{
		write(1, strin++, 1);
		cont++;
	}
	return (cont);
}

/**
 * _printf - the fun of alx project
 * @format: a varible to be declared
 * Return: the wanted text
 */
int _printf(const char *format, ...)
{
va_list the_list;
int intia_var = 0;

va_start(the_list, format);

while (*format)
{
	if (*format != '%')
		intia_var += print_char(*format);
	else
	{
		format++;
		if (*format == 'c')
			intia_var += ptint_char(va_arg(the_list, int));
		else if (*format == 's')
			initia_var += print_str(va_arg(the_list, char *));
		else if (*format == '%')
			intia_var += print_char('%');
	}
	format++;
}
va_end(the_list);
return (intia_var);
}
