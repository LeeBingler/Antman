/*
** EPITECH PROJECT, 2022
** return base
** File description:
** function that take an int and return this int in base char.
*/

#include "my.h"

unsigned int my_counter_base_modif(long long nbr, char const *base, long *ptr)
{
    long long diviseur = my_strlen(base);
    if (nbr < 0) {
        my_counter_base_modif(-nbr, base, ptr);
        *ptr = *ptr + 1;
        return 0;
    }
    if (nbr / diviseur)
        my_counter_base_modif(nbr /= diviseur , base, ptr);
    *ptr = *ptr + 1;
    return 0;
}

char *return_base(long long nb, char const *base)
{
    char *nb_str;
    long len_base = my_strlen(base);
    int minus = nb < 0 ? 1 : 0;
    long a = minus;
    long size_of_nb_in_base = 0;

    my_counter_base_modif(nb, base, &size_of_nb_in_base);
    nb_str = my_calloc(sizeof(char) * (size_of_nb_in_base + 1));
    nb_str[size_of_nb_in_base] = '\0';
    if (minus == 1) {
        nb_str[0] = '-';
        nb *= -1;
    }
    for (int i = 1; a < size_of_nb_in_base; i++) {
        nb_str[size_of_nb_in_base - i] = base[nb % len_base];
        nb /= len_base;
        a++;
    }
    return nb_str;
}
