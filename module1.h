#ifndef MODULE1_H
#define MODULE1_H

#include <stdio.h>

enum ANIMAL {
    CAT,
    DOG,
    SHARK,
    NaN // Not aN aNimal
};

void find(enum ANIMAL animal_found);

#endif