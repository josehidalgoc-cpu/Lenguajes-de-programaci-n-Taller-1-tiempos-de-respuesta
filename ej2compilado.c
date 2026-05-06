#include <stdio.h>
#include <stdlib.h>

int main() {
    int pares = 0;
    int impares = 0;
    int number;

    for (int i = 0; i < 500; i++) {
        number = rand () % 51 + 50;

        if (number % 2 == 0) {
            ++pares;
        } else {
            ++impares;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    return 0;
}
