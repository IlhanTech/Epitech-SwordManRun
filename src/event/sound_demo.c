/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** sound_demo
*/

#include "../include/graph.h"

void sound_demo(initialisation *s)
{
    if (s->sound_bool == 1) {
        sfMusic_setVolume(s->music, 1);
        sfMusic_setVolume(s->dragon_sound, 10);
        sfMusic_setVolume(s->sound_feu, 5);
    }
}

void sound_off(initialisation *s)
{
    if (s->sound_bool == 0) {
        sfMusic_setVolume(s->music, 0);
        sfMusic_setVolume(s->dragon_sound, 0);
        sfMusic_setVolume(s->sound_feu, 0);
    }
}

void sound_demobool(initialisation *s)
{
    if (s->event.type == sfEvtKeyPressed &&
    s->event.key.code == sfKeyS) {
        s->sound_bool = 1;
    }
    if (s->event.type == sfEvtKeyPressed &&
    s->event.key.code == sfKeyW) {
        s->sound_bool = 0;
    }
}