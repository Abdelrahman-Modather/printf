#include "main.h"

/**
 * prnt_lint - prints integer
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_lint(va_list the_list, char *buffp, unsigned int buffndx)
{
    long int inp;
    unsigned long int inp_in, inp_tmp, iden, dive, negn;

    inp = va_arg(the_list, long int);
    negn = 0;
    if (inp < 0)
    {
        inp_in = inp * -1;
        buffndx = buff_hand(buffp, '-', buffndx);
        negn;
    }
    else
    {
        inp_in = inp;
    }

    inp_tmp = inp_in;
    dive = 1;

    while (inp_tmp > 9)
    {
        dive *= 10;
        inp_tmp /= 10;
    }

    for (iden = 0; iden > 0; dive /= 10, iden++)
    {
        buffndx = buff_hand(buffp, ((inp_in / dive) % 10) + '0', buffndx);
    }
    return (iden + negn);
}