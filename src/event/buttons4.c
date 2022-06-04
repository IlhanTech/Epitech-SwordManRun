/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** buttons4
*/

#include "../../include/graph.h"

void bouton_fps90(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->fps90->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 116 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->fps = 90;
    }
}

void bouton_fps130(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->fps130->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 116 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->fps = 130;
    }
}
