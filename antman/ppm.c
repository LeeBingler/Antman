/*
** EPITECH PROJECT, 2023
** html.c
** File description:
** function that compress html file.
*/

#include "include/ppm.h"

static int free_return(char *a, unsigned char *b, int nb)
{
    free(a);
    free(b);
    return nb;
}

static void compressed_char(char buffi, unsigned char **tab)
{
    static unsigned char char_to_print = 0;
    static int index = 0;

    if (buffi == '\n') {
        (*tab)[index] = char_to_print;
        char_to_print = 0;
        index++;
        return;
    }
    char_to_print *= 10;
    char_to_print += (unsigned char)(buffi - '0');
}

static void print_header(char *buff, int *index_buff)
{
    for (int i = 0; i < 4; i++) {
        for (;buff[(*index_buff)] != '\n'; (*index_buff)++)
            my_putchar(buff[(*index_buff)]);
        my_putchar(buff[(*index_buff)]);
        (*index_buff)++;
    }
}

static int get_size_str(char *buff, int index_buff)
{
    int size_str = 0;

    for (int i = index_buff; buff[i] != '\0'; i++)
        if (buff[i] == '\n')
            size_str++;

    return size_str;
}

int antman_ppm(char *path)
{
    char *buff = recup_file(path);
    int size_file = get_size_file(path);
    int index_buff = 0;
    unsigned char *str;
    int size_str = 0;

    if (size_file == 0) return 0;
    if (buff == NULL || size_file == -1) {
        free(buff);
        return 84;
    }
    print_header(buff, &index_buff);
    size_str = get_size_str(buff, index_buff);
    str = malloc(sizeof(unsigned char) * size_str);
    if (str == NULL) return free_return(buff, str, 84);
    for (; buff[index_buff] != '\0'; index_buff++)
        compressed_char(buff[index_buff], &str);
    write(1, str, size_str);
    return free_return(buff, str, 0);
}
