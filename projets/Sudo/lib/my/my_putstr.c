/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    return i;
}
