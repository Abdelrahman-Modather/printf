#include "main.h"

unsigned int memory_copy(buff_t *oup, const char *source, unsigned int var);
void buff_free(buff_t *oup);
buff_t *buff_init(void);

/**
 * memory_copy - copies var fro, memory to source
 * @oup: bufft structure
 * @source: pointer to memory
 * @var: num copied
 * Return: num that copied
*/
unsigned int memory_copy(buff_t *oup, const char *source, unsigned int var)
{
    unsigned int ndx;

    for (ndx = 0; ndx < var; ndx++)
    {
        *(oup->buff) = *(source + ndx);
        (oup->lngth)++;

        if (oup->lngth == 1024)
        {
            write(1, oup->strt, oup->lngth);
            oup->buff = oup->strt;
            oup->lngth = 0;
        }

        else
            (oup->buff)++;
    }

    return (var);
}

/**
 * buff_free - frees bufft
 * @oup: freed bufft
*/
void buff_free(buff_t *oup)
{
    free(oup->strt);
    free(oup);
}

/**
 * buff_init - initialize var bufft
 * Return: pointer to buuft
*/
buff_t *buff_init(void)
{
    buff_t *oup;
    
    oup = malloc(sizeof(buff_t));
    if (oup == NULL)
        return (NULL);
    
    oup->buff = malloc(sizeof(char) * 1024);
    if (oup->buff == NULL)
    {
        free(oup);
        return (NULL);
    }

    oup->strt = oup->buff;
    oup->lngth = 0;

    return (oup);
}