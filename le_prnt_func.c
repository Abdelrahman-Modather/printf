#include "main.h"

/**
 * le_prnt_func - iden amount
 * @i: iden
 * @ndx: the list of iden args
 * Return: amount of iden
*/
int le_prnt_func(const char *i, int ndx)
{
	prnt_tx pren[] = {
	{"c", prnt_char}, {"s", prnt_str}, {"b", prnt_bin},
	{"i", prnt_int}, {"d", prnt_int}, {"%", prnt_prs},
	{" %", prnt_prs}, {"u", prnt_uint}, {"b", prnt_bin},
	{"#d", prnt_int}, {"#i", prnt_int}, {"o", prnt_oct},
	{"x", prnt_hex}, {"X", prnt_uppx},
	{NULL, NULL},
	};
	int iden = 0, jojo = 0, st_ndx;

	st_ndx = ndx;
	while (pren[iden].type_arg)
	{
		if (i[ndx] == pren[iden].type_arg[jojo])
		{
			if (pren[iden].type_arg[jojo + 1] != '\0')
				ndx++, jojo++;
			else
				break;
		}
		else
		{
			jojo = 0;
			iden++;
			ndx = st_ndx;
		}
	}
	return (jojo);
}
