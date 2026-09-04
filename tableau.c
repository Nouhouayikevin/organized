/*
** EPITECH PROJECT, 2024
** tableaux
** File description:
** fonctions pour les chaines de caracteres
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int k;
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    k = s1[i] - s2[i];
    return k;
}

char *my_strcpy(char *dest, char *str)
{
    int i = 0;
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return dest;
}

char *my_strdump(char *s)
{
    char *str = malloc(sizeof(char) * (my_strlen(s) + 1));

    return my_strcpy(str, s);
}

char **read_line(char *filepath)
{
    char **L = NULL;
    char *tab = NULL;
    struct stat t;
    int fd = open(filepath, O_RDONLY);

    stat(filepath, &t);
    tab = malloc(sizeof(char) * (t.st_size + 1));
    read(fd, tab, t.st_size);
    tab[t.st_size] = '\0';
    close(fd);
    L = my_str_to_word_array(tab, '\n');
    free(tab);
    return L;
}
