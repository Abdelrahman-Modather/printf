#include "main.h"

/**
 * prnt_shuint - prints unsigned integer
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_shuint(va_list the_list, char *buffp, unsigned int buffndx)
{
    unsigned short int inp_in, inp_tmp, iden, dive;

    inp_in = va_arg(the_list, unsigned int);
    inp_tmp = inp_in;
    dive = 1;
    while (inp_tmp > 9)
    {
        dive *= 10;
        inp_tmp /= 10;
    }
    for (iden = 0; dive > 0; dive /= 10, iden++)
    {
        buffndx = buff_hand(buffp, ((inp_in / dive) % 10) + '0', buffndx);
    }
    return (iden);
}