/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** clock
*/

#include "../include/graph.h"

void clockcreate(initialisation *s)
{
    s->clock = sfClock_create();
    s->clock2 = sfClock_create();
    s->clock3 = sfClock_create();
    s->clock4 = sfClock_create();
    s->clock5 = sfClock_create();
    s->clock6 = sfClock_create();
    s->clock7 = sfClock_create();
    s->clock8 = sfClock_create();
    s->clock9 = sfClock_create();
    s->clock10 = sfClock_create();
    s->clock11 = sfClock_create();
    s->clock12 = sfClock_create();
}

void clocktime(initialisation *s, personnage_t *p, parallax_t *par)
{
    s->seconds2 = s->times2.microseconds / 10000.0;
    s->times2 = sfClock_getElapsedTime(s->clock2);

    clock_parallax(s, par);
    clock_dragon(s, p);
    clock_feu(s, p);
    if (p->var == 1) {
        if (s->seconds2 > 4.5) {
            animation1(p);
            animation4(p);
            animation6(p);
            sfClock_restart(s->clock2);
        }
    }
}

void clock_ailes(initialisation *s, personnage_t *p)
{
    s->seconds5 = s->times5.microseconds / 10000.0;
    s->times5 = sfClock_getElapsedTime(s->clock5);

    if (s->seconds5 > 12.5) {
        animation3(p);
        animation7(p);
        animation8(p);
        animation9(p);
        animation10(p);
        sfClock_restart(s->clock5);
    }
}

void clock_flywalk(initialisation *s, personnage_t *p)
{
    s->seconds6 = s->times6.microseconds / 10000.0;
    s->times6 = sfClock_getElapsedTime(s->clock6);

    if (p->var == 0) {
        if (s->seconds6 > 20) {
            animation1(p);
            sfClock_restart(s->clock6);
        }
    }
}

void clock_background(initialisation *s, personnage_t *p)
{
    s->seconds8 = s->times8.microseconds / 1000000.0;
    s->times8 = sfClock_getElapsedTime(s->clock8);

    if (s->seconds8 > 0.05) {
        animation5(p);
        sfClock_restart(s->clock8);
    }
}
