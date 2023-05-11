/*
** EPITECH PROJECT, 2022
** fonction
** File description:
** fonction
*/

#include "../includes/my.h"

int my_putstr (char const *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int valid_nb(char c)
{
    if (c >= 48 && c <= 57 || c == '-') {
        return 0;
    }
    return 84;
}

int check_nb (char *str)
{
    for (int i = 0; str[i] != '\0';i++) {
        if (valid_nb(str[i]) == 84) {
            return 84;
        }
    }
    return 0;
}
