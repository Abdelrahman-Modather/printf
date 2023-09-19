#include "main.h"

/**
 * prnt_usr - print string and non chars
 * @the_list: args list
 * @buffp: pointer of buffer
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_usr(va_list the_list, char *buffp, unsigned int buffndx)
{
    unsigned char *string;
    char *hex, *bin;
    unsigned int iden, some, oup;

    string = va_arg(the_list, unsigned char *);
    bin = malloc(sizeof(char) * (32 + 1));
    hex = malloc(sizeof(char) * (8 + 1));
    for (some = iden = 0; string[iden]; iden++)
    {
        if (string[iden] < 32 || string[iden] >= 127)
        {
            buffndx = buff_hand(buffp, '\\', buffndx);
            buffndx = buff_hand(buffndx, 'x', buffndx);
            oup = string[iden];
            bin = bin_arr(bin, oup, 0, 32);
            hex = hex_arr(bin, hex, 1, 8);
            buffndx = buff_hand(buffp, hex[6], buffndx);
            buffndx = buff_hand(buffp, hex[7], buffndx);
            some += 3;
        }
        else
            buffndx = buff_hand(buffp, string[iden], buffndx);
    }
    free(bin);
    free(hex);
    return (iden + some);
}