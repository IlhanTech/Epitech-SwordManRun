/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** moove
*/

#include "../include/graph.h"

void if_out(initialisation *s, personnage_t *p)
{
    sfVector2f posrestore = sfSprite_getPosition(p->feu->sprite);
    sfVector2f tmp = sfSprite_getPosition(p->dragon->sprite);

    if (posrestore.x < -140) {
        posrestore.x = 980;
        posrestore.y = tmp.y + 130;
        sfSprite_setPosition(p->feu->sprite, posrestore);
        effect_feu(s);
    }
}

void if_dragonout(initialisation *s, personnage_t *p)
{
    sfVector2f posrestore = sfSprite_getPosition(p->dragon->sprite);

    int max = 200;
    int low = 100;

    if (posrestore.x < -140) {
        posrestore.x = 1200;
        posrestore.y = posrestore.y = (rand() % (max - low + 1)) + low;
        sfSprite_setPosition(p->dragon->sprite, posrestore);
    }
}

void moove_feu(initialisation *s, personnage_t *p)
{
    if_out(s, p);
    sfVector2f moove = sfSprite_getPosition(p->feu->sprite);
    moove.y += 0;
    moove.x += -10;
    sfSprite_setPosition(p->feu->sprite, moove);
}

void moove_drag(initialisation *s, personnage_t *p)
{
    int haut = 20;
    int bas = 280;
    sfVector2f posdrag = sfSprite_getPosition(p->dragon->sprite);

    posdrag.y += s->vector;
    sfSprite_setPosition(p->dragon->sprite, posdrag);

    if (posdrag.y == bas || posdrag.y == haut) {
        s->vector = -s->vector;
    }
}

void moove(initialisation *s, personnage_t *p)
{
    moove_feu(s, p);
    moove_drag(s, p);
}
