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
		{"c", prnt_char}, {"s", prnt_str},


{"b", prnt_bin},{"u",prnt_uint},
{"o", prnt_oct},{"x", prnt_hex},{"X", prnt_uppx},
{"S", prnt_usr},{"p", prnt_adderss},{"li", prnt_lint},
{"ld", prnt_lint},{"lu", prnt_luint},{"lo", prnt_loct},
{"lx", prnt_lhex},{"lX", prnt_luppx},{"hi", prnt_shint},
{"hd", prnt_shint},{"hu", prnt_shuint},{"ho", prnt_shoct},
{"hx", prnt_shhex},{"hX", prnt_shuppx},{"+ d", prnt_pint},
{"#o", prnt_noct},{"#x", prnt_nhex},{"#X", prnt_nuppx},{"+ i", prnt_pint},
{"#u", prnt_uint},{"+i", prnt_pint},{"+d", prnt_pint},
{"+u", prnt_uint},{"+o", prnt_oct},{"+x", prnt_hex},{"+X", prnt_uppx},
{" i", prnt_sint},{" d", prnt_sint},{" u", prnt_uint},{" o", prnt_oct},
{" x", prnt_hex},{" X", prnt_uppx},{"R", prnt_root},{"r", prnt_re},
{"l", prnt_prs},{"h", prnt_prs},{" +i", prnt_pint},{" +d", prnt_pint},
{"i", prnt_int}, {"d", prnt_int}, {"%", prnt_prs}, {" %", prnt_prs}, {NULL, NULL},{"#d", prnt_int}, {"#i", prnt_int} 

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
