/*
** EPITECH PROJECT, 2022
** my strncat
** File description:
** a function that concatenates n characters of the src string
** to the end of the dest string.
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_des = my_strlen(dest);

    for (int i = 0; i < nb; i++) {
        dest[len_des + i] = src[i];
    }
    dest[len_des + nb] = '\0';
    return dest;
}
