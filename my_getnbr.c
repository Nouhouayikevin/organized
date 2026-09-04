/*
** EPITECH PROJECT, 2024
** mygetnbr
** File description:
** find the number
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_getnbr(char *s)
{
    int j = 1;
    int n = 0;
    int i = 0;

    for (i = 0; s[i] != '\n' && s[i] != '\0'; i++) {
        if (s[i] == '-')
            exit(84);
        if (s[i] == '+') {
            exit(84);
        }
        if ((s[i] >= 48 && s[i] <= 57)) {
            n = (n * 10) + s[i] - '0';
        } else
            exit(84);
    }
    return n * j;
}
