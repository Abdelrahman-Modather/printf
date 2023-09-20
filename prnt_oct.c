#include "main.h"

char *bin_arr(char *bin, long int inp, int negn, int bisize);
char *oct_arr(char *bny, char *oct);
/**
 * prnt_oct - print dec to hex
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_oct(va_list the_list, char *buffp, unsigned int buffndx)
{
    int inp, calc, iden, f_d, negn;
    char *oct, *bin;

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
    bin = malloc(sizeof(char) * (32 + 1));
    bin = bin_arr(bin, inp, negn, 32);
    oct = malloc(sizeof(char) * (11 + 1));
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
