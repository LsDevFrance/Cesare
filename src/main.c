/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "../includes/my.h"

int get_str (int argc, char **argv)
{
    char *str;
    int  nb,i;
    int compt_cara = strlen(argv[2]);
    if (compt_cara != 0)
        str = argv[2];
    else
        return 84;
    nb = atoi(argv[3]);
    decypher(str, nb);

    return 0;
}

int read_file (char *name_file,int compt_cara,int nb)
{
    int byt;
    char buf;
    char str[compt_cara];
    int i = 0;
    int fd_read = open(name_file, O_RDONLY);
    while ((byt = read(fd_read, &buf,1)) > 0) {
        str[i] = buf;
        i++;
    }
    decypher(str, nb);
}

int open_file (char *name_file, int nb)
{
    int byt;
    char buf;
    int compt_cara;
    int fd_read = open(name_file, O_RDONLY);
    if (fd_read == -1) {
        return 84;
    }
    while ((byt = read(fd_read, &buf,1)) > 0) {
        compt_cara++;
    }
    read_file(name_file,compt_cara,nb);
}

int detect_flags (int argc, char **argv)
{
    if (argc == 3)
        argv[3] = "0";
    if (check_nb(argv[3]) == 84)
        return 84;
    if (argv[1][0] == '-') {
        if (argv[1][1] == 's' || argv[1][1] == 'f') {
            (argv[1][1] == 's') ? get_str(argc,argv) : 0;
            (argv[1][1] == 'f') ? open_file(argv[2], atoi(argv[3])) : 0;
        } else {
            return 84;
        }
    } else {
        return 84;
    }
    return 0;
}

int main (int argc, char **argv)
{
    if (argc == 4 || argc == 3)
        detect_flags(argc,argv);
    else
        return 84;
    return 0;
}
