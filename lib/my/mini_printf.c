/*
** EPITECH PROJECT, 2022
** mini printf
** File description:
** That function has to print all the characters in
** the string format and print variable when % is used before.
** You must process all of the following flags : * %d, %i, %s, %c, %%.
** Upon successful return, these functions return
** the number of characters printed (excluding the null byte
** used to end output to strings).
*/
#include <stdarg.h>
#include "my.h"

int print_percent(const char *format, va_list ap, int i)
{
    int a = 0;
    if (format[i + 1] == 'd' || format[i + 1] == 'i') {
        a = va_arg(ap, int);
        my_putnbr(a);
        return len_int(a);
    }
    if (format[i + 1] == 's') {
        return my_putstr(va_arg(ap, char*));
    }
    if (format[i + 1] == 'c') {
        my_putchar((char)va_arg(ap, int));
        return 1;
    }
    if (format[i + 1] == '%'){
        my_putchar('%');
        return 1;
    }
    return 1;
}

int mini_printf(const char *format, ...)
{
    va_list ap;
    int tracker = 0;
    int final_len = 0;
    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++){
        tracker = 0;
        if (format[i] == '%') {
            final_len += print_percent(format, ap, i);
            final_len -= 2;
            i += 1;
            tracker = 1;
        }
        if (tracker == 0) {
            my_putchar(format[i]);
        }
    }
    va_end(ap);
    return (my_strlen(format) + final_len);
}
