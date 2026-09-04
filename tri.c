/*
** EPITECH PROJECT, 2024
** les fonctions de tri
** File description:
** de organize
*/

#include "my.h"

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

void q_sort_type(list_t **T, int start, int end)
{
    tri_t t;

    if (start < end) {
        t.pivot = start;
        t.i = start;
        t.j = end;
        while (t.i < t.j) {
            q_sort_type2(T, start, end, &t);
        }
        permute(&(T[t.j]), &(T[t.pivot]));
        q_sort_type(T, start, t.j - 1);
        q_sort_type(T, t.j + 1, end);
    }
}

void q_sort_id(list_t **T, int start, int end)
{
    tri_t t;

    if (start < end) {
        t.pivot = start;
        t.i = start;
        t.j = end;
        while (t.i < t.j) {
            q_sort_id2(T, start, end, &t);
        }
        permute(&(T[t.j]), &(T[t.pivot]));
        q_sort_id(T, start, t.j - 1);
        q_sort_id(T, t.j + 1, end);
    }
}