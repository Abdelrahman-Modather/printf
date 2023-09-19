#include "main.h"

/**
 * bin_arr - prints dec to bin
 * @bin: pointer to binary
 * @inp: input
 * @bisize: bin size
 * @negn: neg input
 * Return: num of charecters printed
*/
char *bin_arr(char *bin, long int inp, int negn, int bisize)
{
    int iden;

    for (iden = 0; iden < bisize; iden++)
    bin[iden] = '0';
    bin[bisize] = '\0';
    for (iden = bisize - 1; inp > 1; iden--)
    {
        if (inp == 2)
            bin[iden] = '0';
        else
            bin[iden] = (inp %2) + '0';
        inp /= 2;
    }
    if (inp != 0)
        bin[iden] = '1';
    if (negn)
    {
        for (iden = 0; bin[iden]; iden++)
            if (bin[iden] == '0')
                bin[iden] = '1';
            else
                bin[iden] = '0';
    }
    return (bin);
}