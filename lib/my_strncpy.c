/*
** EPITECH PROJECT, 2024
** day07
** File description:
** strncpy
*/
#include "../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
