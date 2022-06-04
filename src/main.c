/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** main
*/

#include "../include/graph.h"

void set_value(initialisation *s, personnage_t *p, coeur_t *c, parallax_t *par)
{
    p->val_ailes = 0;
    p->var = 1;
    s->stat = 0;
    s->gravity.x = 535;
    s->gravity.y = 420;
    s->gravity_ailes.x = 480;
    s->gravity_ailes.y = 450;
    s->game = 0;
    p->bool_pause = 0;
    s->isound = 50;
    s->fps = 130;
    s->clock_bool = 0;
    s->numbers = 0;
    s->vector = -1;
    s->sound_bool = 2;
    c->nblife = 4;
    create(s, p, par, c);
}

void clock(initialisation *s, parallax_t *par, personnage_t *p, coeur_t *c)
{
    clock_repos(s, p);
    clock_background(s, p);
    if (s->clock_bool == 1) {
        clocktime(s, p, par);
        moove(s, p);
        gravity_jump(p, s);
        clock_score(s);
        clock_info(s, p);
        colision(s, p, c);
    }
    highscore(s);
}

int main(int ac, char **av)
{
    initialisation *s = malloc(sizeof(initialisation));
    personnage_t *p =  malloc(sizeof(personnage_t));
    parallax_t *par =  malloc(sizeof(parallax_t));
    coeur_t *c = malloc(sizeof(coeur_t));

    set_value(s, p, c, par);
    if (description(ac, av) == 1)
        return (0);
    while (sfRenderWindow_isOpen(s->window)) {
        life_counter(s, p, c);
        handle_event(s, p);
        loopmusic(s);
        clock(s, par, p, c);
        display(s);
        game(s, p, par, c);
        cursor(p, s);
        sound_demo(s);
        sound_off(s);
    }
    destroy(s);
    my_putstr("À bientôt ;)\n");
}
