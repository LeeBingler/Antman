/*
** EPITECH PROJECT, 2022
** my .h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

#pragma once

int my_compute_power_rec (int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strlen (char const * str);
int count_signe(char *str, int len_str);

int my_getnbr(char *str);
long my_putnbr(long nb);
int my_putnbr_base(int nbr, char const *base);

int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
void my_swap(int *a, int *b);

char *my_revstr(char * str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *src);
char *my_strstr(char *str, char const *to_find);

int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isfloat(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);

int calc_len(char const *str, int max);
int calc_lenght(char const *str, int n );

int my_strcmp(char const *s1, char const *s2);

char *my_strlowcase(char *str);
char *my_strupcase(char *str);

int my_isneg(int n);
int my_is_prime(int nb);
int not_uppercase(char str);
int not_uppercase2(char str);
int not_case(char str);
int not_lowercase(char str);
int not_num(char str);
int not_printable(char str);

int my_show_word_array(char * const *tab);

void verif_min (int *array, int size, int i, int min);
void my_sort_int_array(int *array, int size);

int verif_sign(char str);
int verif_lowercase(char str);
char *my_strcapitalize(char *str);

int mini_printf(const char *format, ...);
int my_showmem(char const *str);
int my_showstr(char const *str);
int is_the_word_that(int index, char *str, char const *to_find);

unsigned int my_counter_base_modif(long long nbr, char const *base, long *ptr);
char *return_base(long long, char const *);
char *my_calloc(int size);
char **my_arr_calloc(int size_col, int size_row);

void free_arr(char **str);
void free_arr_int(int **arr);
void free_arr_float(float **arr);
int get_size_arr_int(int **arr);
int get_size_arr_float(float **arr);

int len_int(int number);
char **free_tab_char_size(char **tab, int size);
