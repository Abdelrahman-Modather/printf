#include "main.h"
/**
 * _printf - the fun of alx project
 * @format: input
 * Return: wanted text
*/
int _printf(const char *format, ...)
{
	unsigned int iden = 0, lngth = 0, idenbuffer = 0;
	va_list the_list;
	int (*fun)(va_list, char *, unsigned int);
	char *buff;

	va_start(the_list, format), buff = malloc(sizeof(char) * 1024);
	if (!format || !buff || (format[iden] == '%' && !format[iden + 1]))
		return (-1);
	if (!format[iden])
		return (0);
	for (iden = 0; format && format[iden]; iden++)
	{
		if (format[iden] == '%')
		{
			if (format[iden + 1] == '\0')
			{
				prnt_buffer(buff, idenbuffer), free(buff), va_end(the_list);
				return (-1);
			}
			else
			{
				fun = g_prnt_fun(format, iden + 1);
				if (fun == NULL)
				{
					if (format[iden + 1] == ' ' && !format[iden + 2])
					return (-1);
					buff_hand(buff, format[iden], idenbuffer), lngth++, iden--;
				}
				else
				{
					lngth +=  fun(the_list, buff, idenbuffer);
					iden += le_prnt_func(format, iden + 1);
				}
			} iden++;
		}
		else
			buff_hand(buff, format[iden], idenbuffer), lngth++;
		for (idenbuffer = lngth; idenbuffer > 1024; idenbuffer -= 1024)
			;
	}
prnt_buffer(buff, idenbuffer), free(buff), va_end(the_list);
	return (lngth);
}
