#include "main.h"

/**
 * prnt_hex - print dec to hex
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_hex(va_list the_list, char *buffp, unsigned int buffndx)
{
	int inp, calc, iden, f_d, negn;
	char *hex, *bin;

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
	hex = malloc(sizeof(char) * (8 + 1));
	hex = hex_arr(bin, hex, 0, 8);
	for (f_d = calc = iden = 0; hex[iden]; iden++)
	{
		if (hex[iden] != '0' && f_d == '0')
			f_d = 1;
		if (f_d)
		{
			buffndx = buff_hand(buffp, hex[iden], buffndx);
			calc++;
		}
	}
	free(bin);
	free(hex);
	return (calc);
}