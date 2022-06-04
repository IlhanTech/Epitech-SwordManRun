/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** buttons
*/

#include "../include/graph.h"

void bouton_play(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->play->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            set_position(s, p);
            effect(s);
            s->game = 1;
            s->clock_bool = 1;
            sfMusic_play(s->dragon_sound);
    }
}

void bouton_settings(initialisation *s, personnage_t *p)
{
    sfVector2f posout = {1000, 1000};

    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->setting->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            effect(s);
            sfSprite_setPosition(p->quit->sprite, posout);
            s->game = 4;
    }
}

void bouton_wings(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->wings_button->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            effect(s);
            sfText_setColor(s->text_wings, sfRed);
            s->game = 2;
    }
}

void bouton_quit(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->quit->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            effect(s);
            sfText_setColor(s->text_wings, sfRed);
            sfRenderWindow_close(s->window);
    }
}

void bouton_retour(initialisation *s, personnage_t *p)
{
    sfVector2f vector = {515, 445};
    sfVector2f vector2 = {515, 160};
    sfVector2f pos = {560, 158};

    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->retour->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            effect(s);
            sfSprite_setPosition(p->quit->sprite, vector);
            sfSprite_setPosition(p->play->sprite, vector2);
            sfText_setPosition(s->text_play, pos);
            s->game = 0;
    }
}
