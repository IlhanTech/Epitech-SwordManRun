/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** animation
*/

#include "../include/graph.h"

void animation1(personnage_t *p)
{
    sfIntRect re = sfSprite_getTextureRect(p->chevalier->sprite);
    if (p->var == 1) {
        re.top = 0;
        re.left = re.left + 402;
        if (re.left == 7638)
            re.left = 0;
        re.height = 455;
        re.width = 402;
        sfSprite_setTextureRect(p->chevalier->sprite, re);
    }
}

void animation2(personnage_t *p)
{
    sfIntRect re = sfSprite_getTextureRect(p->chevalier_jump->sprite);
    re.top = 0;
    re.left = re.left + 397;
    if (re.left == 7940)
        re.left = 0;
    re.height = 478;
    re.width = 397;
    sfSprite_setTextureRect(p->chevalier_jump->sprite, re);
}

void animation3(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->ailes->sprite);
    re2.top = 0;
    re2.left = re2.left + 165;
    if (re2.left >= 659)
        re2.left = 0;
    re2.height = 92;
    re2.width = 165;
    sfSprite_setTextureRect(p->ailes->sprite, re2);
}

void animation4(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->attack_light->sprite);
    re2.top = 0;
    re2.left = re2.left + 489;
    if (re2.left >= 5868)
        re2.left = 0;
    re2.height = 494;
    re2.width = 489;
    sfSprite_setTextureRect(p->attack_light->sprite, re2);
}

void animation5(personnage_t *p)
{
    sfIntRect re2 = sfSprite_getTextureRect(p->back->sprite);
    re2.top = 0;
    re2.left = re2.left + 1200;
    if (re2.left >= 11998)
        re2.left = 0;
    re2.height = 766;
    re2.width = 1200;
    sfSprite_setTextureRect(p->back->sprite, re2);
}
