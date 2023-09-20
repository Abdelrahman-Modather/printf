#include "main.h"

/**
 * prnt_oct - print dec to hex
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_oct(va_list the_list, char *buffp, unsigned int buffndx)
{
	unsigned int inp;
	int calc, iden, f_d;
	char oct[12];

	inp = va_arg(the_list, unsigned int);
	if (inp == 0)
	{
		buffndx = buff_hand(buffp, '0', buffndx);
		return (1);
	}
	calc = 0;

	while (inp > 0)
	{
		oct[calc] = (inp % 8) + '0';
		inp /= 8;
		calc++;
	}
	oct[calc] = '\0';

	for (f_d = iden = calc -1; iden >= 0; iden--)
	{
		buffndx = buff_hand(buffp, oct[iden], buffndx);
	}
	
	return (calc);
}
