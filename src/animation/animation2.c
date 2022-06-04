/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** animation2
*/

#include "../include/graph.h"

void animation6(personnage_t *p)
{
    sfIntRect re = sfSprite_getTextureRect(p->repos->sprite);
    re.top = 0;
    re.left = re.left + 328;
    if (re.left >= 6560)
        re.left = 0;
    re.height = 482;
    re.width = 328;
    sfSprite_setTextureRect(p->repos->sprite, re);
}

void animation11(personnage_t *p)
{
    sfIntRect re = sfSprite_getTextureRect(p->dragon->sprite);
    re.top = 0;
    re.left = re.left + 256;
    if (re.left >= 2816)
        re.left = 0;
    re.height = 256;
    re.width = 256;
    sfSprite_setTextureRect(p->dragon->sprite, re);
}

void animation12(personnage_t *p)
{
    sfIntRect re = sfSprite_getTextureRect(p->feu->sprite);
    re.top = 0;
    re.left = re.left + 150;
    if (re.left >= 900)
        re.left = 0;
    re.height = 150;
    re.width = 150;
    sfSprite_setTextureRect(p->feu->sprite, re);
}
