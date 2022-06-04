/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** parallax
*/

#include "../include/graph.h"

void parallax_moove1(parallax_t *par)
{
    sfIntRect re = sfSprite_getTextureRect(par->plan1->sprite);
    re.top = 0;
    re.left = re.left + 1;
    re.height = 600;
    re.width = 1200;
    sfSprite_setTextureRect(par->plan1->sprite, re);
    sfIntRect re2 = sfSprite_getTextureRect(par->plan2->sprite);
    re2.top = 0;
    re2.left = re2.left + 2;
    re2.height = 600;
    re2.width = 1200;
    sfSprite_setTextureRect(par->plan2->sprite, re2);
}

void parallax_moove2(parallax_t *par)
{
    sfIntRect re = sfSprite_getTextureRect(par->plan3->sprite);
    re.top = 0;
    re.left = re.left + 3;
    re.height = 600;
    re.width = 1200;
    sfSprite_setTextureRect(par->plan3->sprite, re);
    sfIntRect re2 = sfSprite_getTextureRect(par->plan4->sprite);
    re2.top = 0;
    re2.left = re2.left + 4;
    re2.height = 600;
    re2.width = 1200;
    sfSprite_setTextureRect(par->plan4->sprite, re2);
}

void parallax_moove3(parallax_t *par)
{
    sfIntRect re = sfSprite_getTextureRect(par->plan5->sprite);
    re.top = 0;
    re.left = re.left + 6;
    re.height = 600;
    re.width = 1200;
    sfSprite_setTextureRect(par->plan5->sprite, re);
    sfIntRect re2 = sfSprite_getTextureRect(par->plan6->sprite);
    re2.top = 0;
    re2.left = re2.left + 7;
    re2.height = 600;
    re2.width = 1200;
    sfSprite_setTextureRect(par->plan6->sprite, re2);
}

void parallax_moove4(parallax_t *par)
{
    sfIntRect re = sfSprite_getTextureRect(par->plan7->sprite);
    re.top = 0;
    re.left = re.left + 8;
    re.height = 600;
    re.width = 1200;
    sfSprite_setTextureRect(par->plan7->sprite, re);
}
