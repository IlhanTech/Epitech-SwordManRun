/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** text4
*/

#include "../../include/graph.h"

void text_youloose(initialisation *s)
{
    sfVector2f pos = {495, 60};
    char *str = "You Loose";
    s->text_youloose = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_youloose, s->font);
    sfText_setPosition(s->text_youloose, pos);
    sfText_setString(s->text_youloose, str);
    sfText_setColor(s->text_youloose, sfBlack);
    sfText_setStyle(s->text_youloose, sfTextBold);
    sfText_setCharacterSize(s->text_youloose, 80);
}

void text_highscore(initialisation *s)
{
    sfVector2f pos = {525, 150};
    char *str = "Highscore";
    s->text_highscore = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_highscore, s->font);
    sfText_setPosition(s->text_highscore, pos);
    sfText_setString(s->text_highscore, str);
    sfText_setColor(s->text_highscore, sfBlack);
    sfText_setStyle(s->text_highscore, sfTextBold);
    sfText_setCharacterSize(s->text_highscore, 60);
}

void text_highscorebis(initialisation *s)
{
    sfVector2f pos = {525, 225};
    char *str = "100";
    s->text_highscorebis = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_highscorebis, s->font);
    sfText_setPosition(s->text_highscorebis, pos);
    sfText_setColor(s->text_highscorebis, sfBlack);
    sfText_setStyle(s->text_highscorebis, sfTextBold);
    sfText_setString(s->text_highscorebis, str);
    sfText_setCharacterSize(s->text_highscorebis, 60);
}

void text_scorebis(initialisation *s)
{
    sfVector2f pos = {525, 300};
    char *str = my_itoa(s->numbers);
    s->text_scorebis = sfText_create();
    s->font = sfFont_createFromFile("police/test.ttf");
    sfText_setFont(s->text_scorebis, s->font);
    sfText_setPosition(s->text_scorebis, pos);
    sfText_setColor(s->text_scorebis, sfBlack);
    sfText_setStyle(s->text_scorebis, sfTextBold);
    sfText_setString(s->text_scorebis, str);
    sfText_setCharacterSize(s->text_scorebis, 60);
}