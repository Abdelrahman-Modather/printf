#include "main.h"

/**
 * long_oct_arr - long octal number
 * @bny: bin array
 * @oct: oct array
 * Return: long oct arr
*/
char *long_oct_arr(char *bny, char *oct)
{
    int operator, iden, jojo, esta_oct, ocsize;

    oct[22] = '\0';
    for (iden = 63, esta_oct = 21; iden >= 0; iden--, esta_oct--)
    {
        if (iden > 0)
            ocsize = 4;
        else
            ocsize = 1;
        for (operator = 0, jojo =1; jojo <= ocsize; jojo *= 2, iden--)
            operator = ((bny[iden] - '0') * jojo) + operator;
        iden++;
        oct[esta_oct] = operator + '0';        
    }
    return (oct);
}