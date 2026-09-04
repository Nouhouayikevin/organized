/*
** EPITECH PROJECT, 2024
** les fonctions supp pour le tri
** File description:
** Organized
*/

#include "my.h"

void lier(list_t **t, list_t **l)
{
    int i = 0;

    *l = t[0];
    for (i = 0; t[i + 1] != NULL; i++) {
        t[i]->next = t[i + 1];
    }
    t[i]->next = NULL;
}

int nb_elmt_list(list_t *list)
{
    int i = 0;
    list_t *l = list;

    while (l != NULL) {
        i++;
        l = l->next;
    }
    return i;
}

void permute(list_t **l1, list_t **l2)
{
    list_t *temp = NULL;

    temp = *l1;
    *l1 = *l2;
    *l2 = temp;
}

void dis(list_t **t)
{
    int i = 0;

    while (t[i] != NULL) {
        write(1, t[i]->object->material, my_strlen(t[i]->object->material));
        my_putchar('\n');
        i++;
    }
}
