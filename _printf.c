#include "main.h"

/**
  * _printf - Printf function
  * @format: format var
  * Return: Printed text
  */

int _printf(const char *format, ...);
{
	va_list the_list;
	int intia_var = 0;

	va_start(the_list, format);

	for (int i = 0; format[i] != '\0'; i++) {
		if (format[i] != '%') {
			putchar(format[i]);
			intia_var++;
		} else {
			char spc = format[++i];

			switch (spc) {
				case 'c':
					intia_var += putchar(va_arg(the_list, int));
					break;
				case 's':
					intia_var += puts(va_arg(the_list, char *));
					break;
				case '%':
					putchar('%');
					intia_vat++;
					break;
				default:
					putchar('%');
					putchar(spc);
					intia_var += 2;
			}
		}
	}
	
	va_end(the_list);

	return (intia_var);
}
