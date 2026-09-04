/*
** EPITECH PROJECT, 2024
** my str to word array
** File description:
** my file
*/

#include "my.h"
int number_line(char *s, char c)
{
    int i = 0;
    int j = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            j++;
    }
    return j;
}

int number_colomn(char *s, int k, char c)
{
    while (*s != c && *s != '\0') {
            s++;
            k++;
        }
    return k;
}

void my_strncpy(char *s, char *t, int n)
{
    char a = 0;
    int i = 0;

    for (i = 0; i < n; i++) {
        t[i] = *s;
        s++;
    }
    t[i] = '\0';
}

void affiche_tab(char **tab)
{
    int i = 0;
    int j = 0;

    for (i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

char **my_str_to_word_array(char *s, char c)
{
    int j = number_line(s, c);
    int k = 0;
    char **t = malloc(sizeof(char *) * (j));
    int i = 0;

    for (i = 0; i < j; i++) {
        k = number_colomn(s, k, c);
        t[i] = malloc((k + 1) * sizeof(char));
        my_strncpy(s, t[i], k);
            s = (k + 1) + s;
            k = 0;
    }
    t[j] = NULL;
    return t;
}
