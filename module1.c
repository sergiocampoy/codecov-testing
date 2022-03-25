#include <module1.h>

void find(enum ANIMAL animal_found) {
    switch (animal_found) {
        case CAT:
            printf("observe and ");
        case DOG:
            printf("pet\n");
            break;
        case SHARK:
            printf("swim fast!\n");
            break;
        default:
            printf("run?\n");
    }
}