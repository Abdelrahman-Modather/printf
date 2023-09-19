#include "main.h"

/**
 * prnt_bin - print dec to bin
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_bin(va_list the_list, char *buffp, unsigned int buffndx)
{
	int inp, calc, iden, f_d, negn;
	char *bin;

	inp = va_arg(the_list, int);
	negn = 0;
	if (inp == 0)
	{
		buffndx = buff_hand(buffp, '0', buffndx);
		return (1);
	}
	if (inp < 0)
	{
		inp = (inp * -1) - 1;
		negn = 1;
	}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = bin_arr(bin, inp, negn, 32);
	f_d = 0;
	for (calc = iden = 0; bin[iden]; iden++)
	{
		if (f_d == 0 && bin[iden] == '1')
			f_d = 1;
		if (f_d == 1)
		{
			buffndx = buff_hand(buffp, bin[iden], buffndx);
			calc++;
		}
	}
	free(bin);
	return (calc);
}