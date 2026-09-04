/*
** EPITECH PROJECT, 2024
** the sort function for the organize algorithm
** File description:
** the way of sorting
*/

#include "my.h"

list_t **tab_de_tri(list_t *l, int i)
{
    list_t *c = l;
    list_t **tab = NULL;

    tab = malloc(sizeof(list_t **) * (i + 1));
    i = 0;
    while (c != NULL) {
        tab[i] = c;
        i++;
        c = c->next;
    }
    tab[i] = NULL;
    return tab;
}

list_t **my_revstr(list_t **str, int length)
{
    int longueur;
    int i = 0;
    int milieu = length / 2;
    list_t *a = NULL;

    for (i = 0; i < milieu; i++) {
        a = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = a;
    }
    return str;
}

void sort_part1(char **args, list_t **list, list_t **t, indice_t a)
{
    if (my_strcmp(args[a.i], "NAME") == 0) {
            q_sort_name(t, 0, a.j - 1);
            lier(t, list);
        }
        if (my_strcmp(args[a.i], "TYPE") == 0) {
            q_sort_type(t, 0, a.j - 1);
            lier(t, list);
        }
        if (my_strcmp(args[a.i], "ID") == 0) {
            q_sort_id(t, 0, a.j - 1);
            lier(t, list);
        }
}

indice_t elmt_nbr(list_t *l)
{
    indice_t a;

    a.j = nb_elmt_list(l);
    a.i = 0;
    return a;
}

int sort(void *data, char **args)
{
    indice_t a = elmt_nbr(*(list_t **)data);
    list_t **list = (list_t **)data;
    int k = count_args(args);
    list_t **t = tab_de_tri(*(list_t **)data, a.j);

    sort_args_error(args);
    for (a.i = 0; args[a.i] != NULL; a.i++) {
        sort_part1(args, list, t, a);
        if (my_strcmp(args[a.i], "-r") == 0 && k != 1) {
            t = my_revstr(t, a.j);
            lier(t, list);
        }
    }
    while (t[a.j] != NULL) {
        free(t[a.j]);
        a.j++;
    }
}
