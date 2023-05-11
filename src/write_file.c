/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "../includes/my.h"

void write_file (char * str)
{
    int fd = open("crypt",O_RDONLY);
    if (fd != -1) {
        chmod("crypt", 0777);
    }
    FILE *fd_read = fopen("crypt", "w");
    fwrite(str, 1, my_strlen(str), fd_read);
    chmod("crypt", 0444);
}
