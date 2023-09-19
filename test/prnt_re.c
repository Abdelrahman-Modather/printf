#include "main.h"

/**
 * prnt_re - string in reverse
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_re(va_list the_list, char *buffp, unsigned int buffndx)
{
     char *string;
    unsigned int iden;
    int jojo = 0;
    char null[] = "(llun)";

    string = va_arg(the_list, char *);
    if (string == NULL)
    {
        for (iden = 0; null[iden]; iden++)
            buffndx = buff_hand(buffp, null[iden], buffndx);
        return (6);
    }
    for (iden = 0; string[iden]; iden++)
        ;
    jojo = iden - 1;
    for (; jojo >= 0; jojo--)
    {
        buffndx = buff_hand(buffp, string[jojo], buffndx);
    }
    return (iden);
}