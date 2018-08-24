#include <stdio.h>

int main() {
    // Declaración de variables
    double num1;
    double num2;
    double suma;
    double resta;
    double multiplicacion;
    double division;

    // En esta sección se le pide al usuario los dos numeros
    // para obtener la suma, resta, multiplicacion
    // y division de dichos numeros

    printf("Hola, te ayudare a conocer el valor de la suma, resta, multiplicacion y division de dos numeros\n");
    printf("Ingresa el valor del primer numero: ");
    scanf("%lf", &num1);
    printf("Ingresa el valor del segundo numero: ");
    scanf("%lf", &num2);

    // Esta sección se encarga de la suma
    suma = num1 + num2;

    // Esta sección se encarga de la resta
    resta = num1 - num2;

    //Esta sección se encarga de la multiplicacion
    multiplicacion = num1 * num2;

    //Esta sección se encarga de la division
    division = num1 / num2;


    // Esta sección madna a pantalla los resultado de dichas operaciones
    printf("El resultado de la suma es: %lf\n", suma);
    printf("El resultado de la resta es: %lf\n", resta);
    printf("El resultado de la multiplicacion es: %lf\n", multiplicacion);
    printf("El resultado de la division es: %lf\n", division);

    return 0;
}