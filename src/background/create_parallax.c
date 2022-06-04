/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** create_parallax
*/

#include "../include/graph.h"

parallax_t *create_slide1(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan1 = create_object2("image/Parallax/p1.png");
    return (par);
}

parallax_t *create_slide2(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan2 = create_object2("image/Parallax/p2.png");
    return (par);
}

parallax_t *create_slide3(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan3 = create_object2("image/Parallax/p3.png");
    return (par);
}

parallax_t *create_slide4(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan4 = create_object2("image/Parallax/p4.png");
    return (par);
}

parallax_t *create_slide5(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan5 = create_object2("image/Parallax/p5.png");
    return (par);
}
