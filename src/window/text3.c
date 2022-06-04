/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** text3
*/

#include "../../include/graph.h"

void text_fps90(initialisation *s)
{
    sfVector2f pos = {590, 252};
    char *str = "90";
    s->text_fps90 = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_fps90, s->font);
    sfText_setPosition(s->text_fps90, pos);
    sfText_setString(s->text_fps90, str);
    sfText_setColor(s->text_fps90, sfBlack);
    sfText_setStyle(s->text_fps90, sfTextBold);
    sfText_setCharacterSize(s->text_fps90, 42);
}

void text_fps130(initialisation *s)
{
    sfVector2f pos = {700, 252};
    char *str = "130";
    s->text_fps130 = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_fps130, s->font);
    sfText_setPosition(s->text_fps130, pos);
    sfText_setString(s->text_fps130, str);
    sfText_setColor(s->text_fps130, sfBlack);
    sfText_setStyle(s->text_fps130, sfTextBold);
    sfText_setCharacterSize(s->text_fps130, 42);
}

void text_resume(initialisation *s)
{
    sfVector2f pos = {530, 160};
    char *str = "Resume";
    s->text_resume = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_resume, s->font);
    sfText_setPosition(s->text_resume, pos);
    sfText_setString(s->text_resume, str);
    sfText_setColor(s->text_resume, sfBlack);
    sfText_setStyle(s->text_resume, sfTextBold);
    sfText_setCharacterSize(s->text_resume, 65);
}

void text_score(initialisation *s)
{
    sfVector2f pos = {570, 25};
    s->score = my_itoa(s->numbers);
    s->text_score = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_score, s->font);
    sfText_setPosition(s->text_score, pos);
    sfText_setString(s->text_score, s->score);
    sfText_setColor(s->text_score, sfBlack);
    sfText_setStyle(s->text_score, sfTextBold);
    sfText_setCharacterSize(s->text_score, 50);
}

void text_byme(initialisation *s)
{
    sfVector2f pos = {470, 320};
    char *str = "Game By IlhanTech";
    s->text_byme = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_byme, s->font);
    sfText_setPosition(s->text_byme, pos);
    sfText_setString(s->text_byme, str);
    sfText_setColor(s->text_byme, sfBlack);
    sfText_setStyle(s->text_byme, sfTextBold);
    sfText_setCharacterSize(s->text_byme, 50);
}
