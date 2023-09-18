#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - the fun of alx project
 * @format: the var to be declared
 * ...: var arg
 * Return: the wanted text
 */
int _printf(const char *format, ...)
{
	int iden = 0, t_c = 0;
	va_list the_list;

	if (!format)
		return (-1);
	va_start(the_list, format);
	while (format[iden] != '\0')
	{
		if (format[iden] == '%')
		{
			iden++;
			switch (format[iden])
			{
				case '%':
					t_c += prnt_char(the_list);
					break;
				case 'c':
					t_c += prnt_char(the_list);
					break;
				case 's':
					t_c += prnt_str(the_list);
					break;
				default:
					if (write(STDOUT_FILENO, &format[iden - 1], 2) == -1)
						return (-1);
					t_c += 2;
					break;
			}
		}
		else
		{
			if (write(STDOUT_FILENO, &format[iden], 1) == -1)
				return (-1);
			t_c++;
		}
		iden++;
	}
	va_end(the_list);
	return (t_c);
}
/**
 * prnt_char - printing chars
 * @the_list: list of args
 * Return: total chars number
 */
int prnt_char(va_list the_list)
{
	char c = va_arg(the_list, int);
	int mktob = write(STDOUT_FILENO, &c, 1);

	if (mktob != 1)
		return (-1);

	return (1);
}
/**
 * prnt_str - printing strings
 * @the_list: list of args
 * Return: total chars number
 */
int prnt_str(va_list the_list)
{
	char *streng = va_arg(the_list, char *);
	int lngth, mktob;

	if (!streng)
		streng = "(null)";

	lngth = strlen(streng);
	mktob = write(STDOUT_FILENO, streng, lngth);
	if (mktob != lngth)
		return (-1);

	return (lngth);
}
