/*
** EPITECH PROJECT, 2024
** the main
** File description:
** of organize project
*/

#include "shell.h"
#include "my.h"

void free_list(list_t *begin)
{
    list_t *b;

    while (begin != NULL) {
        b = begin;
        begin = begin->next;
        free(b);
    }
}

int main(void)
{
    list_t *head = NULL;

    workshop_shell(&head);
    free_list(head);
    return 0;
}
