/*
** EPITECH PROJECT, 2023
** get file size
** File description:
** a function that return the size of a file.
*/

#include <sys/stat.h>

int get_size_file(char *path)
{
    struct stat s;

    if (stat(path, &s) == -1)
        return -1;

    return s.st_size;
}
