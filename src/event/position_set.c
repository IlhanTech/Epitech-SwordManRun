/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** position_set
*/

#include "../include/graph.h"

void set_position(initialisation *s, personnage_t *p)
{
    sfVector2f pos = {480, 450};
    sfVector2f posout = {1000, 1000};

    sfSprite_setPosition(p->ailes->sprite, pos);
    sfSprite_setPosition(p->ailes_bleus->sprite, pos);
    sfSprite_setPosition(p->ailes_blanches->sprite, pos);
    sfSprite_setPosition(p->ailes_green->sprite, pos);
    sfSprite_setPosition(p->ailes_noires->sprite, pos);
    sfSprite_setPosition(p->ailes->sprite, pos);
    sfSprite_setPosition(p->repos->sprite, posout);
}

void set_out(initialisation *s, personnage_t *p)
{
    sfVector2f posout = {1000, 1000};
    //sfSprite_setPosition(p->play->sprite, posout);
    sfSprite_setPosition(p->wings_button->sprite, posout);
    sfSprite_setPosition(p->setting->sprite, posout);
    sfSprite_setPosition(p->resume->sprite, posout);
    sfSprite_setPosition(p->quit->sprite, posout);
}