#include "main.h"

/**
 * prnt_root - prints integer
 * @the_list: args
 * @buffp: pointer for buff
 * @buffndx: buffer index
 * Return: chars printed
*/
int prnt_root(va_list the_list, char *buffp, unsigned int buffndx)
{
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char root[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char *string;
    unsigned int iden, jojo, kylor;
    char null[] = "(abdo)";

    string = va_arg(the_list, char *);
    if (string == NULL)
    {
        for (iden = 0; null[iden]; iden++)
        {
            for (kylor = jojo = 0; alpha; jojo++)
            {
                if (string[iden] == alpha[jojo])
                {
                    kylor = 1;
                    buffndx = buff_hand(buffp, root[jojo], buffndx);
                    break;
                }
            }
            if (kylor == 0)
                buffndx = buff_hand(buffp, string[iden], buffndx);
        }
    }
    return (iden);
}