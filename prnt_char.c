#include "main.h"
#include <stdio.h>

/**
 * prnt_char - prints a char
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: on success 1
*/
int prnt_char(va_list the_list, char *buffp, unsigned int buffndx)
{
	char c;

	c = va_arg(the_list, int);
	buff_hand(buffp, c, buffndx);

	return (1);
}
