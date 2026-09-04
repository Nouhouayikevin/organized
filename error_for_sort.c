/*
** EPITECH PROJECT, 2024
** les cas d'erreures du sort
** File description:
** pour mieux les gerer
*/


#include "my.h"

void sort_args_error(char **ag)
{
    int i = 0;

    if (ag[i] == NULL)
        exit(84);
    for (i = 0; ag[i] != NULL; i++) {
        if (my_strcmp(ag[0], "-r") == 0)
            exit(84);
        if (my_strcmp(ag[i], "NAME") != 0 && my_strcmp(ag[i], "TYPE") != 0 &&
        my_strcmp(ag[i], "ID") != 0 && my_strcmp(ag[i], "-r") != 0)
            exit(84);
    }
}
