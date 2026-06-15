#include <stdio.h>

int main(){
    double p, h, imc;

    printf("Ingrese el peso en kg: ");
    scanf("%lf", &p);
    printf("Ingrese la altura en metros: ");
    scanf("%lf", &h);

    imc = p / (h * h);

    printf("\n\nSu índice de masa corporal es: %.2f\n", imc);

    printf("\n");
    printf("    Índice    |  Condición\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");


    return 0;
}
