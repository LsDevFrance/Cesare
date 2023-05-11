/*
** EPITECH PROJECT, 2023
** hi
** File description:
** hi
*/

#include "happy.h"
#include "../includes/my.h"

int standard_nb(int key)
{
    key = key % 26;
    return key;
}

char shift_high(unsigned char letter, int key)
{
    letter = letter + key;
    if (letter < 'A') {
        letter = letter + 26;
    }
    if (letter > 'Z') {
        letter = letter - 26;
    }
    return letter;
}

char shift_low(unsigned char letter, int key)
{
    letter = letter + key;
    if (letter < 'a') {
        letter = letter + 26;
    }
    if (letter > 'z') {
        letter = letter - 26;
    }
    return letter;
}

char * shift(char * str, int key)
{
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = shift_high(str[i], key);
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = shift_low(str[i], key);
        i++;
    }
    return str;
}

char * decypher(char * str, int key)
{
    key = standard_nb(key);
    str = shift(str, key);
    write_file(str);
    return str;
}
