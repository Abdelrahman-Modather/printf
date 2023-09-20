#include "main.h"
#include <stdio.h>
#include <stdint.h>

char *bin_arr(char *bin, long int inp, int negn, int bisize);
char *hex_arr(char *bny, char *hex, int upp, int hesize);
/**
 * prnt_adderss - Prints the adress
 * @the_list: args
 * @buffp: pointer for buffer
 * @buffndx: buff index
 * Return: chars printed
*/
int prnt_adderss(va_list the_list, char *buffp, unsigned int buffndx)
{
	void *address;
	intptr_t inp;
	int iden, calc, f_d, negn;
	char *hex, *bin;
	char nil[] = "(nil)";

	address = va_arg(the_list, void *);
	if (address == NULL)
	{
		for (iden = 0; nil[iden]; iden++)
			buffndx = buff_hand(buffp, nil[iden], buffndx);
		return (5);
	}
	inp = (intptr_t)address;
	negn = 0;
	if (inp < 0)
	{
		inp = (inp * -1) - 1;
		negn = 1;
	}
	bin = malloc(sizeof(char) * (64 + 1));
	bin = bin_arr(bin, inp, negn, 64);
	hex = malloc(sizeof(char) * (16 + 1));
	hex = hex_arr(bin, hex, 0, 16);
	buffndx = buff_hand(buffp, '0', buffndx);
	buffndx = buff_hand(buffp, 'x', buffndx);
	for (f_d = iden = calc = 0; hex[iden]; iden++)
	{
		if (hex[iden] != '0' && f_d == 0)
			f_d = 1;
		if (f_d)
		{
			buffndx = buff_hand(buffp, hex[iden], buffndx);
			calc++;
		}
	}
	free(bin);
	free(hex);
	return (calc + 2);
}
