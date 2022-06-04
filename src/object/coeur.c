/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** coeur
*/

#include "../include/graph.h"

coeur_t *coeur1(coeur_t *c)
{
    c->nbcoeur1 = 1;
    sfVector2f scale = {0.3, 0.3};
    sfIntRect rect = {0, 0, 180, 237};
    sfVector2f vector = {700, 20};
    c->coeur1 = create_object("image/Personnages/helmet.png", vector, rect);
    sfSprite_setTexture(c->coeur1->sprite, c->coeur1->texture, sfFalse);
    sfSprite_setScale(c->coeur1->sprite, scale);
    return (c);
}

coeur_t *coeur2(coeur_t *c)
{
    c->nbcoeur2 = 1;
    sfVector2f scale = {0.3, 0.3};
    sfIntRect rect = {0, 0, 180, 237};
    sfVector2f vector = {760, 20};
    c->coeur2 = create_object("image/Personnages/helmet.png", vector, rect);
    sfSprite_setTexture(c->coeur2->sprite, c->coeur2->texture, sfFalse);
    sfSprite_setScale(c->coeur2->sprite, scale);
    return (c);
}

coeur_t *coeur3(coeur_t *c)
{
    c->nbcoeur3 = 1;
    sfVector2f scale = {0.3, 0.3};
    sfIntRect rect = {0, 0, 180, 237};
    sfVector2f vector = {820, 20};
    c->coeur3 = create_object("image/Personnages/helmet.png", vector, rect);
    sfSprite_setTexture(c->coeur3->sprite, c->coeur3->texture, sfFalse);
    sfSprite_setScale(c->coeur3->sprite, scale);
    return (c);
}