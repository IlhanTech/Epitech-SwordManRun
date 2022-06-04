/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** buttons2
*/

#include "../include/graph.h"

void bouton_left(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->left->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 66 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 66) {
            effect(s);
            p->val_ailes--;
    }
}

void bouton_right(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->right->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 62 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 63) {
            effect(s);
            p->val_ailes++;
    }
}

void bouton_pause(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->pause->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 62 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 63) {
            effect(s);
            s->game = 3;
            s->clock_bool = 0;
    }
}

void bouton_resume(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->resume->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            effect(s);
            s->game = 1;
            s->clock_bool = 1;
    }
}
