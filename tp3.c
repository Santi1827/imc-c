#include <stdio.h>

// Definición de la constante simbólica TAM (cantidad fija de productos)
#define TAM 5

int main() {
    // Arreglos paralelos para códigos de barra y precios
    int codigos[TAM];
    float precios[TAM];
    
    int i;
    int posMax = 0;
    int posMin = 0;

    printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);

    // Carga y validación de datos
    for (i = 0; i < TAM; i++) {
        // Validación del código de barras (entero positivo de hasta 9 cifras: 1 a 999999999)
        do {
            printf("Ingrese el codigo de barras (1-999999999): ");
            scanf("%d", &codigos[i]);
            
            if (codigos[i] < 1 || codigos[i] > 999999999) {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigos[i] < 1 || codigos[i] > 999999999);

        // Validación del precio (no puede ser negativo)
        do {
            printf("Ingrese el precio: ");
            scanf("%f", &precios[i]);
            
            if (precios[i] < 0) {
                printf("Error. El precio no puede ser negativo.\n");
            }
        } while (precios[i] < 0);
    }

    // Mostrar la lista completa de productos
    printf("\n%-10s %10s\n", "Codigo", "Precio");
    for (i = 0; i < TAM; i++) {
        printf("%10d %10.2f\n", codigos[i], precios[i]);
    }

    // Búsqueda del mayor y menor precio
    for (i = 1; i < TAM; i++) {
        if (precios[i] > precios[posMax]) {
            posMax = i;
        }
        if (precios[i] < precios[posMin]) {
            posMin = i;
        }
    }

    // Imprimir resultados del más caro y más barato
    printf("\nMas caro: [%d] %.2f\n", codigos[posMax], precios[posMax]);
    printf("Mas barato: [%d] %.2f\n", codigos[posMin], precios[posMin]);

    return 0;
}
