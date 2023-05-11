/*
** EPITECH PROJECT, 2022
** hopefully print something
** File description:
** then bsq
*/

#include "happy.h"

int my_str_compare(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 1;
        i++;
    }
    if (str1[i] == str2[i])
        return 0;
    return 1;
}

char * str_add(char * str1, char * str2)
{
    int i = 0, j = 0;
    char *str_f = malloc(sizeof(char) *40);
    if (!str1 || !str2 || !str_f)
        my_put_str("yo str add has been given a broken string");
    while (str1[i] != '\0') {
        str_f[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        str_f[i + j] = str2[j];
        j++;
    }
    str_f[i + j] = '\0';
    return str_f;
}

int arg_counter(char *str)
{
    int L = 0, l = 0;
    while (str[l] == ' ')
        l++;
    while (str[l] != '\0') {
        if (str[l] == ' ' && str[l + 1] != ' ' && str[l + 1] != '\0') {
            L++;
        }
        l++;
    }
    return L;
}

char **my_str_to_map(char *str)
{
    int len = arg_counter(str);
    char ** map = malloc(sizeof(char *) * (len + 2));
    int L = 0, l = 0, j = 0;
    while (str[l] != '\0') {
        map[L] = malloc(sizeof(char) * (str_len(str) + 2));
        while (str[l] != ' ' && str[l] != '\0') {
            map[L][j] = str[l];
            l++;
            j++;
        }
        map[L][j] = '\0';
        L++;
        j = 0;
        while (str[l] == ' ' && str[l] != '\0') {
            l++;
        }
    }
    map[L] = NULL;
    return map;
}

char * str_copy(char * str, int start, int end)
{
    if (end == 0) {
        end = str_len(str);
    }
    if (end - start < 0) {
        return NULL;
    }
    char * str_f = malloc(sizeof(char) * (end - start + 1));
    while (str[start] != '\0' && start != end) {
        start++;
    }
    str_f[start] = '\0';
    return str_f;
}
