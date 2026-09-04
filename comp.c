/*
** EPITECH PROJECT, 2024
** les fonctions comp
** File description:
** les fonctions qui decident de l'ordre
*/

#include "my.h"

int comp1(list_t *l1, list_t *l2)
{
    int a = my_strcmp(l1->object->material, l2->object->material);

    if (a <= 0)
        return 1;
    else
        return 0;
}

int comp2(list_t *l1, list_t *l2)
{
    int a = my_strcmp(l1->object->type, l2->object->type);

    if (a <= 0)
        return 1;
    else
        return 0;
}

int comp3(list_t *l1, list_t *l2)
{
    int a = l1->object->id;
    int b = l2->object->id;

    if (a <= b)
        return 1;
    else
        return 0;
}
