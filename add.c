/*
** EPITECH PROJECT, 2024
** the main
** File description:
** of organize project
*/

#include "my.h"
#include "shell.h"

int a;

void push_to_list(list_t **begin, hdwr_t *h)
{
    list_t *p = malloc(sizeof(list_t));

    p->object = h;
    p->next = *begin;
    if (*begin != NULL)
    (*begin)->prev = p;
    p->prev = NULL;
    *begin = p;
}

int count_args(char **ag)
{
    int i = 0;

    for (i = 0; ag[i] != NULL; i++);
    return i;
}

hdwr_t *complete(indice_t i, char **args)
{
    hdwr_t *h = malloc(sizeof(hdwr_t));

    h->id = a;
    a++;
    h->type = my_strdump(args[i.i]);
    error_type(h->type);
    h->material = my_strdump(args[i.i + 1]);
    my_put(h->type);
    my_put(" n°");
    my_putnbr(h->id);
    my_put(" - ");
    my_putchar('"');
    my_put(h->material);
    my_putchar('"');
    my_put(" added.\n");
    return h;
}

int add(void *data, char **args)
{
    indice_t i;
    hdwr_t *h;
    list_t **list = (list_t **)data;
    list_t *l_cpy = *(list_t **)data;

    i.j = 0;
    if (count_args(args) == 0 || count_args(args) % 2 != 0)
        exit(84);
    verif_args(args);
    for (i.i = 0; args[i.i] != NULL; i.i += 2) {
        h = complete(i, args);
        push_to_list(list, h);
    }
}
