/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** ailes_animation
*/

#include "../include/graph.h"

void animation7(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->ailes_blanches->sprite);
    re2.top = 0;
    re2.left = re2.left + 165;
    if (re2.left >= 659)
        re2.left = 0;
    re2.height = 92;
    re2.width = 165;
    sfSprite_setTextureRect(p->ailes_blanches->sprite, re2);
}

void animation8(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->ailes_bleus->sprite);
    re2.top = 0;
    re2.left = re2.left + 165;
    if (re2.left >= 659)
        re2.left = 0;
    re2.height = 92;
    re2.width = 165;
    sfSprite_setTextureRect(p->ailes_bleus->sprite, re2);
}

void animation9(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->ailes_green->sprite);
    re2.top = 0;
    re2.left = re2.left + 165;
    if (re2.left >= 659)
        re2.left = 0;
    re2.height = 92;
    re2.width = 165;
    sfSprite_setTextureRect(p->ailes_green->sprite, re2);
}

void animation10(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->ailes_noires->sprite);
    re2.top = 0;
    re2.left = re2.left + 165;
    if (re2.left >= 659)
        re2.left = 0;
    re2.height = 92;
    re2.width = 165;
    sfSprite_setTextureRect(p->ailes_noires->sprite, re2);
}
