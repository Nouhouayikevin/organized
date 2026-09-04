/*
** EPITECH PROJECT, 2024
** l'implementation de delete pour organize
** File description:
** gestion de la fonction delete
*/

#include "my.h"

void display_del_elmt(list_t *l)
{
    list_t *list = l;

    my_put(list->object->type);
    my_put(" n°");
    my_putnbr(list->object->id);
    my_put(" - ");
    my_putchar('"');
    my_put(list->object->material);
    my_putchar('"');
    my_put(" deleted.\n");
}

int compare_function(int a, int b)
{
    if (a != b)
        return 0;
    else
        return 1;
}

void delete_in_list(list_t **c, int ref, int(*cmp_fct)(int a, int ref))
{
    list_t *begin = *c;
    list_t *b;
    list_t *save = *c;

    if (cmp_fct((begin)->object->id, ref)) {
        display_del_elmt(begin);
        *c = (*c)->next;
        return;
    }
    while ((begin) != NULL) {
        if (cmp_fct((begin)->object->id, ref)) {
            display_del_elmt(begin);
            b = begin;
            save->next = begin->next;
            return;
        }
        save = begin;
        (begin) = (begin)->next;
    }
    exit(84);
}

void verif_nb(char **ag)
{
    for (int i = 0; ag[i] != NULL; i++) {
        my_getnbr(ag[i]);
    }
}

int del(void *data, char **args)
{
    list_t **list = (list_t **)data;

    verif_nb(args);
    if (*list != NULL)
        for (int i = 0; args[i] != NULL; i++)
            delete_in_list(list, my_getnbr(args[i]), &compare_function);
    else
        exit(84);
}
