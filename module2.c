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