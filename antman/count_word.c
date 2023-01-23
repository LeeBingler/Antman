/*
** EPITECH PROJECT, 2023
** count_words.c
** File description:
** count number of word
*/

#include "include/lyrics.h"

void count_word(char *buff, info_t *info)
{
    int i = 0;
    int word = 0;
    int nb_carac = 0;
    int biggest = 0;
    while (buff[i] != '\0') {
        if (buff[i] != ' ' || buff[i] != '\n')
            nb_carac++;
        if (buff[i] == '\n' || buff[i] == ' ') {
            word++;
            biggest = nb_carac > biggest ? nb_carac : biggest;
            nb_carac = 0;
        }
        i++;
    }
    if (buff[i - 1] != '\n')
        word++;
    info->nb_words = word;
    info->big_word = biggest - 1;
}
