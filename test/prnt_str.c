#include "main.h"
/**
 * prnt_str - prints string
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_str(va_list the_list, char *buffp, unsigned int buffndx)
{
    char *string;
    unsigned int iden;
    char null[] = "(null)";

    string = va_arg(the_list, char *);
    if (string == NULL)
    {
        for (iden = 0; null[iden]; iden++)
            buffp = buff_hand(buffp, null[iden], buffndx);
        return (6);
    }
    for (iden = 0; string[iden]; iden++)
        buffndx = buff_hand(buffp, string[iden], buffp);
    return (iden);
}