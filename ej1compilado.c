#include <stdio.h>
#include <time.h>

int main() {
    int numero;
    int suma = 0;
    float promedio;

    clock_t inicio, fin;
    double tiempo_usado;

    inicio = clock();

    for (int i = 0; i < 10; i++) {
        printf("Ingresa un numero: ");
        scanf("%d", &numero);
        suma += numero;
    }
    promedio = suma / 10.0;

    fin = clock();

    tiempo_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("El tiempo de ejecucion fue: %f segundos\n", tiempo_usado);

    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n", promedio);

    return 0;                                                                                                                                                                                                                                       
}