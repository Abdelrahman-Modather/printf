#include "main.h"

/**
 * buff_hand - buffer charecters conc
 * @buffp: pointer
 * @c: char
 * @idenbuffer: buff index
 * Return: index of buff pointer
*/
unsigned int buff_hand(char *buffp, char c, unsigned int idenbuffer)
{
	if (idenbuffer == 1024)
	{
		prnt_buffer(buffp, idenbuffer);
		idenbuffer = 0;
	}
	buffp[idenbuffer] = c;
	idenbuffer++;
	return (idenbuffer);
}
