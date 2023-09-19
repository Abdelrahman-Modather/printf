#include "main.h"

/**
 * prnt_loct - print dec to long oct
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_loct(va_list the_list, char *buffp, unsigned int buffndx)
{
    long int inp, calc, iden, f_d, negn;
    char *oct, *bin;

    inp = va_arg(the_list, long int);
    negn = 0;
    if (inp == 0)
    {
        buffndx = buff_hand(buffp, '0', buffndx);
        return (1);
    }
    if (inp < 0)
    {
        inp = (inp * -1) - 1;
        negn = 1;
    }
    bin = malloc(sizeof(char) * (64 + 1));
    bin = bin_arr(bin, inp, negn, 64);
    oct = malloc(sizeof(char) * (22 + 1));
    oct = oct_arr(bin, oct);
    for (f_d = calc = iden = 0; oct[iden]; iden++)
    {
        if (oct[iden] != '0' && f_d == '0')
            f_d = 1;
        if (f_d)
        {
            buffndx = buff_hand(buffp, oct[iden], buffndx);
            calc++;
        }
    }
    free(bin);
    free(oct);
    return (calc);
}