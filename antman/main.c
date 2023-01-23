/*
** EPITECH PROJECT, 2023
** main_antman.c
** File description:
** main
*/

#include "include/main.h"
#include "include/html.h"
#include "include/ppm.h"

int main(int ac, char **av)
{
    if (ac != 3 || verif_input(ac, av))
        return 84;

    if (av[2][0] == '1' && av[2][1] == '\0')
        return antman_html(av[1]);
    if (av[2][0] == '2' && av[2][1] == '\0')
        return antman_ppm(av[1]);
    return 0;
}
