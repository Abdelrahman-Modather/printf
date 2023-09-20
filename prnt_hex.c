#include "main.h"

/**
 * prnt_hex - prints hexa
 * prnt_oct - print dec to hex
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_hex(va_list the_list, char *buffp, unsigned int buffndx)
{
	unsigned int inp;
	int calc, iden;
	char hex[9];

	inp = va_arg(the_list, unsigned int);
	if (inp == 0)
	{
		buffndx = buff_hand(buffp, '0', buffndx);
		return (1);
	}
	calc = 0;

	while (inp > 0)
	{
		int rem = inp % 16;

		hex[calc] = (rem < 10) ? ('0' + rem) : ('a' + rem - 10);
		inp /= 16;
		calc++;
	}
	hex[calc] = '\0';

	for (iden = calc - 1; iden >= 0; iden--)
	{
		buffndx = buff_hand(buffp, hex[iden], buffndx);
	}
	return (calc);
}
