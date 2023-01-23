/*
** EPITECH PROJECT, 2022
** miniprintf h
** File description:
** header for all
*/
#include <stdarg.h>

#pragma once

    int mini_printf(const char *, ...);
    void my_putchar(char);
    int my_strlen(char const *);
    int print_percent(const char *, va_list, int);
    int my_put_nbr(int);
    int my_putstr(char const *);
    int len_int(int);
