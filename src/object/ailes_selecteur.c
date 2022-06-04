/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** ailes_selecteur
*/

#include "../include/graph.h"

void select_func(personnage_t *p)
{
    if (p->val_ailes > 4)
        p->val_ailes = 0;
    if (p->val_ailes < 0)
        p->val_ailes = 4;
}

void selecteur(initialisation *s, personnage_t *p)
{
    if (p->val_ailes == 0) {
        sfRenderWindow_drawSprite(s->window, p->ailes->sprite, NULL);
        sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    }
    if (p->val_ailes == 1) {
        sfRenderWindow_drawSprite(s->window, p->ailes_noires->sprite, NULL);
        sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    }
    if (p->val_ailes == 2) {
        sfRenderWindow_drawSprite(s->window, p->ailes_green->sprite, NULL);
        sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    }
    if (p->val_ailes == 3) {
        sfRenderWindow_drawSprite(s->window, p->ailes_bleus->sprite, NULL);
        sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    }
    if (p->val_ailes == 4) {
        sfRenderWindow_drawSprite(s->window, p->ailes_blanches->sprite, NULL);
        sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    }
    select_func(p);
}
