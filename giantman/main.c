/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "include/main.h"
#include "include/giant_image.h"
#include "include/giant_html.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 3 || verif_input(ac,av))
        return 84;

    if (av[2][0] == '1' && av[2][1] == '\0')
        return giantman_html(av[1]);
    if (av[2][0] == '2' && av[2][1] == '\0')
        return giantman_image(av[1]);
    return 0;
}
