/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** create_object
*/

#include "../include/graph.h"

object_t *create_object(const char *filepath, sfVector2f pos, sfIntRect rect)
{
    object_t *object = malloc(sizeof(object_t));

    object->texture = sfTexture_createFromFile(filepath, NULL);
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    object->vector = pos;
    object->rectnl = rect;
    sfSprite_setTextureRect(object->sprite, object->rectnl);
    sfSprite_setPosition(object->sprite, object->vector);
    return (object);
}

object_t *create_object2(const char *filepath)
{
    object_t *object = malloc(sizeof(object_t));

    object->texture = sfTexture_createFromFile(filepath, NULL);
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    return (object);
}

object_t *create_object3(sfVector2f pos, sfIntRect rect)
{
    object_t *object = malloc(sizeof(object_t));
    object->vector = pos;
    object->rectnl = rect;
    sfSprite_setPosition(object->sprite, object->vector);
    return (object);
}
