/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** sound
*/

#include "../include/graph.h"

void effect(initialisation *s)
{
    sfMusic_stop(s->sound_menu);
    sfMusic_play(s->sound_menu);
}

void effect_feu(initialisation *s)
{
    sfMusic_stop(s->sound_feu);
    sfMusic_play(s->sound_feu);
}
