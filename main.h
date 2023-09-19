#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct prnt
{
    char *type_arg;
    int (*f)(va_list, char *, unsigned int);
} prnt_tx;

typedef struct
{
    char *buffer;
    char *start;
    unsigned int len;
} buffer_t;

int _printf(const char *format, ...);
int prnt_prs(va_list p __attribute__((unused)), char *buffp, unsigned int buffndx);
int prnt_char(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_str(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_int(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_bin(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_uint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_oct(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_hex(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_uppx(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_usr(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_adderss(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_lint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_lint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_lhex(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_luint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_loct(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_luppx(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_nhex(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_noct(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_nuppx(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_pint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_shint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_shuint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_shuppx(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_shhex(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_shoct(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_sint(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_re(va_list the_list, char *buffp, unsigned int buffndx);
int prnt_root(va_list the_list, char *buffp, unsigned int buffndx);
int (*g_prnt_fun(const char *i, int ndx))(va_list, char *, unsigned int);
int le_prnt_func(const char *i, int ndx);
unsigned int buff_hand(char *buffp, char c, unsigned int idenbuffer);
int prnt_buffer(char *buffp, unsigned int buffn);
char *bin_arr(char *bin, long int inp, int negn, int bisize);
char *hex_arr(char *bny, char *hex, int upp, int hesize);
char *oct_arr(char *bny, char *oct);
char *long_oct_arr(char *bny, char *oct);
char *short_oct_arr(char *bny, char *oct);

#endif
