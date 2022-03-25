#include <stdio.h>
#include "module1.h"
#include "module2.h"

#define TRUE 1
#define FALSE 0

#define imprime_numero(x) printf("numero: %d\n", x)

int main() {
    // Function from module 1
    find(DOG);
    find(CAT);
    find(DOG);

    // Function from module 2
    feed(SHARK);

    int a, b;
    a = 5;
    b = 10;

    for (int i = 0; i < b; i++) {
        if (TRUE && i < a && !FALSE) {
            printf("a");
        } else {
            printf("b");
        }
    }

    // if (a == 5) {
    //     if (b == 10) {
    //         if (TRUE) {
    //             // imprime_numero(a);
    //             a = 12;
    //         }
    //     }
    // }

    // imprime_numero(a);
}