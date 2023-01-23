/*
** EPITECH PROJECT, 2023
** html.c
** File description:
** function that compress html file.
*/

#include "include/html.h"
#include <string.h>

static int parkour(char ** compressed_word, char **buff)
{
    int size_word = 0;

    for (int i = 0; compressed_word[i] != NULL; i++) {
        size_word = my_strlen(compressed_word[i]);
        if (my_strncmp((*buff), compressed_word[i], size_word) == 0) {
            (*buff) += size_word;
            my_putchar(-i);
            return 1;
        }
    }
    return 0;
}

static int compressed_html(char *buff, char **compressed_word)
{
    char *buff_cp = buff;
    int parcour;

    for (; *buff_cp != '\0'; buff_cp++) {
        parcour = 1;
        if (parkour(compressed_word, &buff_cp)) {
            buff_cp--;
            parcour = 0;
        }
        if (parcour) {
            *buff_cp <= 0 ? my_putchar(-127) : 0;
            my_putchar(*buff_cp);
        }
    }
    return 0;
}

static int init_compressed_html(char *buff)
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

    return compressed_html(buff, compressed_word);
}

int antman_html(char *path)
{
    char *buff = recup_file(path);
    int size = get_size_file(path);

    if (size == 0)
        return 0;
    if (buff == NULL || size == -1) {
        free(buff);
        return 84;
    }
    init_compressed_html(buff);
    free(buff);
    return 0;
}
