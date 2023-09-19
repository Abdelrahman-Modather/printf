#include "main.h"

/**
 * prnt_shuppx - print dec to hex
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_shuppx(va_list the_list, char *buffp, unsigned int buffndx)
{
    short int inp, calc, iden, f_d, negn;
    char *hex, *bin;

    inp = va_arg(the_list, int);
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
    bin = malloc(sizeof(char) * (16 + 1));
    bin = bin_arr(bin, inp, negn, 16);
    hex = malloc(sizeof(char) * (4 + 1));
    hex = hex_arr(bin, hex, 1, 4);
    for (f_d = calc = iden = 0; hex[iden]; iden++)
    {
        if (hex[iden] != '0' && f_d == '0')
            f_d = 1;
        if (f_d)
        {
            buffndx = buff_hand(buffp, hex[iden], buffndx);
            calc++;
        }
    }
    free(bin);
    free(hex);
    return (calc);
}