#include "main.h"
#include <stdio.h>

/**
 * prnt_prs - prints a precentage
 * @p: input
 * @buffp: pointer of buff
 * @buffndx: buffer index
 * Return: on success 1
*/
int prnt_prs(va_list a __attribute__((unused)), char *buffp, unsigned int bfi)
{
    buff_hand(buffp, '%', bfi);

    return (1);
}
