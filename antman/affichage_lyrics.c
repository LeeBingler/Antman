/*
** EPITECH PROJECT, 2023
** antman
** File description:
** affichage_lyrics
*/

#include "include/lyrics.h"

void affichage_lyrics(info_t *info)
{
    for (int i = 0; i < info->indice_wor; i++) {
        my_putstr(info->words[i]);
        my_putchar('|');
    }
    for (int i = 0; i < info->indice_pos; i++) {
        my_putnbr(info->position[i]);
        for (int j = 0; j < my_strlen(info->ponc[i]); j++)
            my_putchar(info->ponc[i][j]);
    }
}
