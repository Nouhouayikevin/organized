/*
** EPITECH PROJECT, 2024
** The display function
** File description:
** of organize project
*/

#include "my.h"

void display_elmt(list_t *l)
{
    list_t *list = l;

    while (list != NULL) {
        my_put(list->object->type);
        my_put(" n°");
        my_putnbr(list->object->id);
        my_put(" - ");
        my_putchar('"');
        my_put(list->object->material);
        my_putchar('"');
        my_putchar('\n');
        list = list->next;
    }
}

int disp(void *data, char **args)
{
    list_t **list = (list_t **)data;

    if (count_args(args) != 0)
        exit(84);
    display_elmt(*list);
}
