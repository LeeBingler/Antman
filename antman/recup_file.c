/*
** EPITECH PROJECT, 2023
** recup_file.c
** File description:
** fonction to recup the information int the file
*/

#include "include/ppm.h"

char *recup_file(char *name_file)
{
    char *buff;
    int fd, size;
    struct stat sb;

    if (stat(name_file, &sb) == -1)
        return NULL;
    size = sb.st_size;
    if (size <= 0)
        return NULL;
    buff = malloc(sizeof(char) * (size + 1));
    fd = open(name_file, O_RDONLY);
    if (buff == NULL || fd == -1 || read(fd, buff, size) == -1) {
        free(buff);
        return NULL;
    }
    buff[size] = '\0';
    return buff;
}
