/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** a function that copies n char from a string into another.
*/

int my_strlen(char const * str);

char *my_strncpy(char *dest, char const *src, int n)
{

    if (n > my_strlen(src)){
        dest[my_strlen(src) + 1] = '\0';
    }

    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
}
