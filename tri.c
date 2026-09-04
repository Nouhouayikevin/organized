/*
** EPITECH PROJECT, 2024
** les fonctions de tri
** File description:
** de organize
*/

#include "my.h"

void permute(list_t **l1, list_t **l2)
{
    list_t *temp = NULL;

    temp = *l1;
    *l1 = *l2;
    *l2 = temp;
}
void q_sort_name1(list_t **T, tri_t *t, int start, int end)
{
    while (comp1(T[t->i], T[t->pivot]) == 1 && t->i < end)
        t->i++;
    while (comp1(T[t->j], T[t->pivot]) == 0 && t->j > start)
        t->j--;
    if (t->i < t->j) {
        permute(&(T[t->i]), &(T[t->j]));
    }
}

void q_sort_name(list_t **T, int start, int end)
{
    tri_t t;

    if (start < end) {
        t.pivot = start;
        t.i = start;
        t.j = end;
        while (t.i < t.j) {
            q_sort_name1(T, &t, start, end);
        }
        permute(&(T[t.j]), &(T[t.pivot]));
        q_sort_name(T, start, t.j - 1);
        q_sort_name(T, t.j + 1, end);
    }
}