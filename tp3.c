#include <stdio.h>

#define PI 3.14159

float calcularAreaRectangulo(float longitud, float altura)
{
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura)
{
    return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio)
{
    return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio)
{
    return 2 * PI * radio;
}

void imprimirResultados(float area, float perimetro)
{
    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);
}

int main()
{
    int opcion;
    float longitud, altura, radio;
    float area, perimetro;

    // Menu y validacion de la opcion
    do
    {
        printf("Ingrese la figura que desea calcular:\n");
        printf("1: Rectangulo\n");
        printf("2: Circulo\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion != 1 && opcion != 2)
        {
            printf("Opcion incorrecta. Intente nuevamente.\n\n");
        }

    } while (opcion != 1 && opcion != 2);

    // Calculos segun la figura seleccionada
    if (opcion == 1)
    {
        printf("\nOpcion de rectangulo seleccionada\n");

        printf("Ingrese la longitud del rectangulo: ");
        scanf("%f", &longitud);

        printf("Ingrese la altura del rectangulo: ");
        scanf("%f", &altura);

        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);

        imprimirResultados(area, perimetro);
    }
    else
    {
        printf("\nOpcion de circulo seleccionada\n");

        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);

        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);

        imprimirResultados(area, perimetro);
    }

    return 0;
}
