/*
** EPITECH PROJECT, 2023
** giant html.c
** File description:
** decompressed antman html
*/

#include "include/giant_html.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int get_size_tab(char **tab)
{
    int size = 0;

    for (; tab[size] != NULL; size++);

    return size;
}

static int parkour(char **compressed_word, char **buffcp, char **buff)
{
    int buff0 = (*buffcp)[0];
    static int nb_char_print = 0;

    if (buff0 == -127) {
        nb_char_print > 0 ? write(1, (*buff), nb_char_print) : 0;
        my_putchar((*buffcp)[1]);
        (*buff) += nb_char_print + 2;
        nb_char_print = 0;
        return 1;
    }
    if (buff0 <= 0 && -buff0 <= get_size_tab(compressed_word)) {
        nb_char_print > 0 ? write(1, (*buff), nb_char_print) : 0;
        write(1, compressed_word[-buff0], my_strlen(compressed_word[-buff0]));
        (*buff) += nb_char_print + 1;
        nb_char_print = 0;
        return 2;
    }
    nb_char_print++;
    return 0;
}

static int decompressed_html(char *buff, char **compressed_word, int size)
{
    char *buff_cp = buff;
    char *buff_cp2 = buff;
    int return_par_tot = 0;

    for (int i = 0, return_par = 0; i < size; buff_cp++, i++, return_par = 0) {
        return_par = parkour(compressed_word, &buff_cp, &buff_cp2);
        if (return_par == 1) {
            i++;
            buff_cp++;
        }
        return_par_tot += return_par;
    }

    if (return_par_tot == 0)
        write(1, buff, my_strlen(buff));
    else
        write(1, buff_cp2, my_strlen(buff_cp2));

    return 0;
}

static int init_decompressed_html(char *buff, int size)
{
    char *compressed_word[128] = {
        "</div>", "div", "class", "span", "script", "style",  "=\"",
        "html", "http://", "nav", "href=", "function", "text", "javascript",
        "width", "code", "type", "nbsp", "content", "center", "section",
        "img", "<p", "li", "ul", "type", "css", "src", "body",
        "www", "display", "window", "id", "return", "height",
        "meta", "title", "link", "br", "source", "true",
        "<!DOCTYPE html>", "var", "detail", "</", "js", "https://",
        "default", "     ", "    ", "   ", "  ", "\n\n",
        "\t\t", "position", "name", "color", "false", "role",
        "value", "<iframe", "svg", "header", "before", "<h",
        "fig", "audio", "video", "data", "table", "top", "rel", 0
    };

    return decompressed_html(buff, compressed_word, size);
}

int giantman_html(char *str)
{
    char *buff = recup_file_char(str);
    int size = get_size_file(str);

    if (size == 0)
        return 0;
    if (buff == NULL || size == -1) {
        free(buff);
        return 84;
    }

    init_decompressed_html(buff, size);
    free(buff);
    return 0;
}
