/*
** EPITECH PROJECT, 2022
** my_strstr
** File description:
** a function that copy strstr in library C.
*/
char my_putchar(char c);
int my_strlen(char const *str);

int is_the_word_that(int index, char *str, char const *to_find)
{
    int counter_letter = 0;
    int to_find_lenght = index + my_strlen(to_find);
    int i = 0;

    for (int a = index; a < to_find_lenght; a++){
        if (str[index] == to_find[i]){
            counter_letter ++;
        } else {
            counter_letter = 0;
        }
        i++;

    }

    if (counter_letter == my_strlen(to_find))
            return 1;

    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    if (to_find[0] == '\0'){
        return &str[0];
    }
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_the_word_that(i, str, to_find) == 1){
            return &str[i];
        }
    }
    return "NULL";
}
