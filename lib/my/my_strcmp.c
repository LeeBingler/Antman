/*
** EPITECH PROJECT, 2022
** my strcmp
** File description:
** reproduse the behavior of the strcmp in the C lib.
*/

int my_strlen(char const *str);

static int calc_len_max(char const *s1, char const *s2)
{
    int size_s1 = my_strlen(s1);
    int size_s2 = my_strlen(s2);

    if (size_s1 < size_s2)
        return size_s2;
    return size_s1;
}

int my_strcmp(char const *s1, char const *s2)
{
    int len_max = calc_len_max(s1, s2);
    int return_value = 0;

    for (int i = 0; i < len_max; i++) {
        if (s1[i] < s2[i]) {
            return_value = -1;
            break;
        }
        if (s1[i] > s2[i]) {
            return_value = 1;
            break;
        }
    }
    return return_value;
}
