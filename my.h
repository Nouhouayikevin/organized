/*
** EPITECH PROJECT, 2024
** my.h for the organize project
** File description:
** functions are implemented
*/

#ifndef _MY_H_
    #define _MY_H_
    #include <unistd.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include "shell.h"

typedef enum type {
    WIRE,
    ACTUATOR,
    DEVICE,
    PROCESSOR,
    SENSOR
}typed_t;

typedef struct hdwr_s {
    char *type;
    char *material;
    int id;
}hdwr_t;

typedef struct indice_s {
    int i;
    int j;
}indice_t;
typedef struct li_s{
int i;
 struct li_s *next;
}li_t; 
typedef struct list_s {
    hdwr_t *object;
    int i;
    struct list_s *next;
    struct list_s *prev;
}list_t;

typedef struct tri {
    int i;
    int j;
    int pivot;
}tri_t;
char **my_str_to_word_array(char *s, char c);
void my_putstr(char *s);
void my_putchar(char c);
void affiche_tab(char **tab);
void my_put(char *s);
void my_putnbr(int nbr);
int my_getnbr(char *s);
int my_strcmp(char *s1, char *s2);
int my_strlen(char *s);
char *my_strdump(char *s);
void error_type(char *t);
void verif_args(char **ag);
int count_args(char **ag);
void lier(list_t **t, list_t **l);
int nb_elmt_list(list_t *list);
void permute(list_t **l1, list_t **l2);
int comp1(list_t *l1, list_t *l2);
void dis(list_t **t);
void sort_args_error(char **ag);
void q_sort_name(list_t **T, int start, int end);
int comp1(list_t *l1, list_t *l2);
void q_sort_type(list_t **T, int start, int end);
int comp2(list_t *l1, list_t *l2);
int comp3(list_t *l1, list_t *l2);
void q_sort_id(list_t **T, int start, int end);
void q_sort_name1(list_t **T, tri_t *t, int start, int end);
void q_sort_type2(list_t **T, int start, int end, tri_t *t);
void q_sort_id2(list_t **T, int start, int end, tri_t *t);

#endif
