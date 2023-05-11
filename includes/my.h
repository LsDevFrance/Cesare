/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my_h
*/

#ifndef MY_H
    # define MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <math.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int my_putstr (char const *str);
    void my_putchar(char c);
    int my_strlen(char const *str);
    int check_nb (char *str);
    char * decypher(char * str, int key);
    void my_put_char(char c);
    void write_file (char * str);

#endif
