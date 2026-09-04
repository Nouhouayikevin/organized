/*
** EPITECH PROJECT, 2024
** the main
** File description:
** of organize project
*/

#include "my.h"
#include "shell.h"

void ver_char_upper(char *str)
{
    while (*str != '\0') {
        if (*str < 'A' || *str > 'Z')
            exit(84);
        *str++;
    }
}

void ver_char_lower(char *str)
{
    while (*str != '\0') {
        if (*str < 'a' || *str > 'z')
            exit(84);
        *str++;
    }
}

void verif_args(char **ag)
{
    int i = 0;

    for (i = 0; ag[i] != NULL; i++) {
        if (i % 2 == 0) {
            error_type(ag[i]);
            ver_char_upper(ag[i]);
        }
    }
}

void error_type(char *t)
{
    if (my_strcmp(t, "WIRE") != 0 && my_strcmp(t, "ACTUATOR") != 0 &&
    my_strcmp(t, "PROCESSOR") != 0 && my_strcmp(t, "DEVICE") != 0 &&
    my_strcmp(t, "SENSOR") != 0)
        exit(84);
}
