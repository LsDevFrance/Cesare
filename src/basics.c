/*
** EPITECH PROJECT, 2022
** hopefully print something
** File description:
** then bsq
*/

#include "happy.h"

void my_put_char(char c)
{
    write(1, &c, 1);
}

int str_len(char *str)
{
    int L = 0;
    while (str[L] != '\0'){
        L++;
    }
    return (L);
}

void my_put_str(char *str)
{
    int L = 0;
    while (str[L] != '\0'){
        my_put_char(str[L]);
        L++;
    }
}

void my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_put_char('-');
    }
    if (nb <= 9) {
        my_put_char(nb + '0');
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}

int my_get_nbr(char * str)
{
    int nbr = 0;
    int i = 0;
    int neg = 1;
    if ( str[0] == '-') {
        i++;
        neg = -1;
    }

    while (str[i] != '\0') {
        nbr *= 10;
        nbr += str[i] - 48;
        i++;
    }
    return (nbr * neg);
}
