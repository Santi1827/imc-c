#include <stdio.h>

int main() {
    double p, h, imc;

    do {
        printf("Ingrese el peso en kg: ");
        scanf("%lf", &p);

        if (p < 0) {
            printf("Error. El peso no puede ser negativo.\n");
        }
    } while (p < 0);

    do {
        printf("Ingrese la altura en metros: ");
        scanf("%lf", &h);

        if (h < 0) {
            printf("Error. La altura no puede ser negativa.\n");
        }
    } while (h < 0);

    imc = p / (h * h);

    printf("\n\nSu índice de masa corporal es: %.2f\n", imc);

    printf("\n");
    printf("    Índice    |  Condición\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");

    printf("\nUsted se encuentra en la condición: ");

    if (imc < 18.5) {
        printf("Bajo peso\n");
    } else if (imc < 25) {
        printf("Normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    return 0;
}
