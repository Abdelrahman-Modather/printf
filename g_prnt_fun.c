#include "main.h"
/**
 * g_prnt_fun - chooses the right function
 * @i: identifier of args
 * @ndx: arg iden indx
 * Return: pointer to function
*/
int (*g_prnt_fun(const char *i, int ndx))(va_list, char *, unsigned int)
{
	prnt_tx pren[] = {
		{"c", prnt_char}, {"s", prnt_str},
		{"u", prnt_uint}, {"b", prnt_bin},
		{"%", prnt_prs}, {" %", prnt_prs},
		{"i", prnt_int}, {"d", prnt_int},
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
	return (pren[iden].f);
}
