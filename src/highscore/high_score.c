/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** high_score
*/

#include "../include/graph.h"

int read_things()
{
    int fd = open("highscore", O_RDONLY);
    char buff[100];
    int size = read(fd, buff, 100);
    int highscore = my_getnbr(buff);
    close(fd);
    return (highscore);
}

void highscore(initialisation *s)
{
    if (s->game == 5) {
        FILE *file;
        file = fopen("highscore","w");
        int tmp = read_things();
        int var = s->numbers;
        char *highscore = my_itoa(tmp);
        char *score = my_itoa(var);
        if (var > tmp) {
            fwrite(score, 1, my_strlen(score), file);
        } else {
            fwrite(highscore, 1, my_strlen(highscore), file);
        }
    }
}


