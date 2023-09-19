#include "main.h"

/**
 * prnt_buffer - prints buffer
 * @buffp: pointer for buff
 * @buffn: buffer num
 * Return: nums printed
*/
int prnt_buffer(char *buffp, unsigned int buffn)
{
    return (write(1, buffp, buffn));
}