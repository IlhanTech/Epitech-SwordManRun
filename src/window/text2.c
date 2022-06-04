/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** text2
*/

#include "../../include/graph.h"

void text_retour(initialisation *s)
{
    sfVector2f pos = {570, 500};
    char *str = "Back";
    s->text_retour = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_retour, s->font);
    sfText_setPosition(s->text_retour, pos);
    sfText_setString(s->text_retour, str);
    sfText_setColor(s->text_retour, sfBlack);
    sfText_setStyle(s->text_retour, sfTextBold);
    sfText_setCharacterSize(s->text_retour, 65);
}

void text_menusettings(initialisation *s)
{
    sfVector2f pos = {520, 50};
    char *str = "Settings";
    s->text_menusettings = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_menusettings, s->font);
    sfText_setPosition(s->text_menusettings, pos);
    sfText_setString(s->text_menusettings, str);
    sfText_setColor(s->text_menusettings, sfBlack);
    sfText_setStyle(s->text_menusettings, sfTextBold);
    sfText_setCharacterSize(s->text_menusettings, 80);
}

void text_sound(initialisation *s)
{
    sfVector2f pos = {430, 140};
    char *str = "Sound :";
    s->text_sound = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_sound, s->font);
    sfText_setPosition(s->text_sound, pos);
    sfText_setString(s->text_sound, str);
    sfText_setColor(s->text_sound, sfBlack);
    sfText_setStyle(s->text_sound, sfTextBold);
    sfText_setCharacterSize(s->text_sound, 65);
}

void text_fps(initialisation *s)
{
    sfVector2f pos = {430, 230};
    char *str = "Fps :";
    s->text_fps = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_fps, s->font);
    sfText_setPosition(s->text_fps, pos);
    sfText_setString(s->text_fps, str);
    sfText_setColor(s->text_fps, sfBlack);
    sfText_setStyle(s->text_fps, sfTextBold);
    sfText_setCharacterSize(s->text_fps, 65);
}
