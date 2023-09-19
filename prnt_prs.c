#include "main.h"
#include <stdio.h>

/**
 * prnt_prs - prints a precentage
 * @a: a description for a
 * @bfi: a description for bfi
 * @a: a description for a
 * @buffp: pointer of bufff
 * Return: on success 1
*/
int prnt_prs(va_list a __attribute__((unused)), char *buffp, unsigned int bfi)
{
	buff_hand(buffp, '%', bfi);

	return (1);
}
