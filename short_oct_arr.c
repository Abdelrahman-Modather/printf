#include "main.h"

/**
 * short_oct_arr - short octal number
 * @bny: bin array
 * @oct: oct array
 * Return: short oct arr
*/
char *short_oct_arr(char *bny, char *oct)
{
    int operator, iden, jojo, esta_oct, ocsize;

    oct[6] = '\0';
    for (iden = 15, esta_oct = 5; iden >= 0; iden--, esta_oct--)
    {
        if (iden > 0)
            ocsize = 4;
        else
            ocsize = 1;
        for (operator = 0, jojo = 1; jojo <= ocsize; jojo *= 2, iden--)
            operator = ((bny[iden] - '0') * jojo) + operator;
        iden++;
        oct[esta_oct] = operator + '0';        
    }
    return (oct);
}