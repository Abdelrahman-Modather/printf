#include "main.h"

/**
 * hex_arr - writes to stdout
 * @bny: array of bin
 * @hex: array of hex
 * @upp: check if upper or lower
 * @hesize: size of hex
 * Return: hex arr
*/
char *hex_arr(char *bny, char *hex, int upp, int hesize)
{
    int operator, iden, jojo, intoletter;

    hex[hesize] = '\0';
    if (upp)
        intoletter = 55;
    else
        intoletter = 87;
    for (iden = (hesize * 4) - 1; iden >= 0; iden--)
    {
        for (operator = 0, jojo = 1; jojo <= 8; jojo *= 2, iden--)
            operator = ((bny[iden] - '0') * jojo) + operator;
        iden++;
        if (operator < 10)
            hex[iden / 4] = operator +48;
        else
            hex[iden / 4] = operator + intoletter;
    }
    return (hex);
}