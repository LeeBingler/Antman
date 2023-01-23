/*
** EPITECH PROJECT, 2023
** verif_input.c
** File description:
** a function that return 84 if the input are bad and 0 if input are good.
*/

#include <sys/stat.h>
#include <stdio.h>

static int verif_file(char *path)
{
    struct stat s;

    if (stat(path, &s) == -1)
        return 84;
    if ((s.st_mode & S_IFMT) != S_IFREG)
        return 84;
    return 0;
}

int verif_input(int ac, char **av)
{
    if (ac != 3)
        return 84;
    if ((av[2][0] != '1' && av[2][0] != '2') ||
        av[2][1] != '\0')
        return 84;
    if (verif_file(av[1]))
        return 84;
    return 0;
}
