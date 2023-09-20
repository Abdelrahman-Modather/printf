#include "main.h"

/**
 * oct_arr - writes into stdout
 * @bny: bin array
 * @oct: oct array
 * Return: bin array
*/
char *oct_arr(char *bny, char *oct)
{
	int operator, iden, jojo, esta_oct, ocsize;

	oct[11] = '\0';
	for (iden = 31, esta_oct = 10; iden >= 0; iden--, esta_oct--)
	{
		if (iden > 1)
			ocsize = 4;
		else
			ocsize = 2;
		for (operator = 0, jojo = 1; jojo <= ocsize; jojo *= 2, iden--)
			operator = ((bny[iden] - '0') * jojo) + operator;
		iden++;
		oct[esta_oct] = operator + '0';
	}
	return (oct);
}
