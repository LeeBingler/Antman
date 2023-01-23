/*
** EPITECH PROJECT, 2022
** my strcat
** File description:
** a function that concatenates two strings.
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len_des = my_strlen(dest);
    int len_src = my_strlen(src);

    for (int i = 0; i < len_src; i++) {
        dest[len_des + i] = src[i];
    }
    dest[len_des + len_src] = '\0';
    return dest;
}
