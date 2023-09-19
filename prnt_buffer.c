#include "main.h"

/**
 * prnt_buffer - prints buffer
 * @buffp: pointer for buff
 * @bfi: buffer num
 * Return: nums printed
*/
int prnt_buffer(char *buffp, unsigned int bfi)
{
	return (write(1, buffp, bfi));
}
