/*
** EPITECH PROJECT, 2024
** my_isneg.c
** File description:
** my_isneg
*/

#include "my.h"

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0) {
    my_putchar('P');
    } else {
    my_putchar('N');
    }
    return 0;
}
