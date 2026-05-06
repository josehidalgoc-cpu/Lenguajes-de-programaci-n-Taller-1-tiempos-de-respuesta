#include <stdio.h>
#include <stdlib.h> // Necesaria para rand()

int main() {
    int num_sucursales = 25;
    
    char sucursales[25][20]; //el primer [] es cuantos elementos van, y el segundo el size maximo.
    float ventas[25];
    float suma_total = 0;
    float promedio_ventas;

    for (int i = 0; i < num_sucursales; i++) {
        sprintf(sucursales[i], "Sucursal %d", i + 1);
        
        ventas[i] = (rand() % 4501) + 500;
        
        suma_total += ventas[i];
    }

    promedio_ventas = suma_total / num_sucursales;

    printf("Promedio de ventas general: %.2f\n", promedio_ventas);
    printf("Sucursales con ventas mayores al promedio:");

    for (int i = 0; i < num_sucursales; i++) {
        if (ventas[i] > promedio_ventas) {
            printf("- %s: $%.2f\n", sucursales[i], ventas[i]);
        }
    }

    return 0;
}