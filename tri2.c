/*
** EPITECH PROJECT, 2024
** les secondes fonctions de tri
** File description:
** pour organize
*/


#include "my.h"

void q_sort_id2(list_t **T, int start, int end, tri_t *t)
{
    while (comp3(T[t->i], T[t->pivot]) == 1 && t->i < end)
            t->i++;
    while (comp3(T[t->j], T[t->pivot]) == 0 && t->j > start)
        t->j--;
    if (t->i < t->j) {
        permute(&(T[t->i]), &(T[t->j]));
    }
}

void q_sort_type2(list_t **T, int start, int end, tri_t *t)
{
    while (comp2(T[t->i], T[t->pivot]) == 1 && t->i < end)
        t->i++;
    while (comp2(T[t->j], T[t->pivot]) == 0 && t->j > start)
        t->j--;
    if (t->i < t->j) {
        permute(&(T[t->i]), &(T[t->j]));
    }
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
