/*
** EPITECH PROJECT, 2023
** giant_images.c
** File description:
** decompress image.
*/

#include "include/giant_image.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

static int get_len_int(unsigned int nb)
{
    int len = 0;

    while (nb) {
        nb /= 10;
        len++;
    }
    return len;
}

static int free_return(char *a, int nb)
{
    free(a);
    return nb;
}

static int decompressed_char(unsigned char buffi)
{
    unsigned int nb_to_print = buffi;
    int len_int = get_len_int(nb_to_print) - 1;
    char *char_to_print = malloc(sizeof(char) * (len_int + 2));

    if (char_to_print == NULL) return free_return(char_to_print, 84);
    char_to_print[len_int + 1] = '\n';
    if (buffi == 0) {
        write(1, "0\n", 2);
        free(char_to_print);
        return 0;
    }
    for (int i = len_int; i >= 0; i--) {
        char_to_print[i] = (buffi % 10) + '0';
        buffi /= 10;
    }
    write(1, char_to_print, len_int + 2);
    return free_return(char_to_print, 0);
}

int giantman_image(char *path)
{
    unsigned char *buff = recup_file(path);
    int size_of_file = get_size_file(path);
    int index_buff = 0;

    if (size_of_file == 0)
        return 0;
    if (buff == NULL || size_of_file == -1) {
        free(buff);
        return 84;
    }
    for (int i = 0; i < 4; i++, index_buff++) {
        for (;buff[index_buff] != '\n'; index_buff++)
            my_putchar(buff[index_buff]);
        my_putchar(buff[index_buff]);
    }

    for (; index_buff < size_of_file; index_buff++)
        decompressed_char(buff[index_buff]);
    free(buff);
    return 0;
}
