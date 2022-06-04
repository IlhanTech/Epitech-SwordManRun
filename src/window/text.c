/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** text
*/

#include "../../include/graph.h"

void text_play(initialisation *s)
{
    sfVector2f pos = {560, 158};
    char *str = "Play";
    s->text_play = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_play, s->font);
    sfText_setPosition(s->text_play, pos);
    sfText_setString(s->text_play, str);
    sfText_setColor(s->text_play, sfBlack);
    sfText_setStyle(s->text_play, sfTextBold);
    sfText_setCharacterSize(s->text_play, 65);
}

void text_settings(initialisation *s)
{
    sfVector2f pos = {525, 253};
    char *str = "Settings";
    s->text_settings = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_settings, s->font);
    sfText_setPosition(s->text_settings, pos);
    sfText_setString(s->text_settings, str);
    sfText_setColor(s->text_settings, sfBlack);
    sfText_setStyle(s->text_settings, sfTextBold);
    sfText_setCharacterSize(s->text_settings, 65);
}

void text_wings(initialisation *s)
{
    sfVector2f pos = {543, 348};
    char *str = "Wings";
    s->text_wings = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_wings, s->font);
    sfText_setPosition(s->text_wings, pos);
    sfText_setString(s->text_wings, str);
    sfText_setColor(s->text_wings, sfBlack);
    sfText_setStyle(s->text_wings, sfTextBold);
    sfText_setCharacterSize(s->text_wings, 65);
}

void text_quit(initialisation *s)
{
    sfVector2f pos = {560, 446};
    char *str = "Quit";
    s->text_quit = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_quit, s->font);
    sfText_setPosition(s->text_quit, pos);
    sfText_setString(s->text_quit, str);
    sfText_setColor(s->text_quit, sfBlack);
    sfText_setStyle(s->text_quit, sfTextBold);
    sfText_setCharacterSize(s->text_quit, 65);
}

void text_wingsselect(initialisation *s)
{
    sfVector2f pos = {430, 50};
    char *str = "Wings Selector";
    s->text_wingssel = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_wingssel, s->font);
    sfText_setPosition(s->text_wingssel, pos);
    sfText_setString(s->text_wingssel, str);
    sfText_setColor(s->text_wingssel, sfBlack);
    sfText_setStyle(s->text_wingssel, sfTextBold);
    sfText_setCharacterSize(s->text_wingssel, 80);
}
