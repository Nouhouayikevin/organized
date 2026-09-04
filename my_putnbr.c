/*
** EPITECH PROJECT, 2024
** le affiche float
** File description:
** la partie  des affiche
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "my.h"
#include "shell.h"

void my_putnbr(int nbr)
{
    if (nbr < 0) {
        write(1, "-", 1);
        my_putnbr(-nbr);
    }
    if (nbr < 10 && nbr >= 0) {
        my_putchar(nbr + '0');
    }
    if (nbr >= 10) {
        my_putnbr(nbr / 10);
        my_putchar((nbr % 10) + '0');
    }
}
