#include <module2.h>

void feed(enum ANIMAL animal_found) {
    switch (animal_found) {
        case CAT:
            printf("cat food");
            break;
        case DOG:
            printf("dog food\n");
            break;
        case SHARK:
            printf("human\n");
            break;
        default:
            printf("Unknown animal\n");
    }
}

void feast(enum ANIMAL hunter, enum ANIMAL prey) {
    if (hunter > prey) {
        printf("yummy\n");
    } else if (hunter) {
        printf("ded\n");
    } else {
        printf("tie\n");
    }
}