// operaciones.h

#define OPERACIONES_H

// Declaraciones de funciones
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

// operaciones.c
#include "operaciones.h"

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        // Manejo de división por cero
        return 0;
    }
}

// main.c
#include <stdio.h>
#include "operaciones.h"

int main() {
    float num1, num2, resultado;
    char operacion;

    printf("Bienvenido a la calculadora operacional")
    // Solicitar al usuario ingresar dos números y la operación
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    printf("Ingrese la operación a realizar (+, -, *, /): ");
    scanf(" %c", &operacion);

    // Realizar la operación correspondiente
    switch (operacion) {
        case '+':
            resultado = suma(num1, num2);
            break;
        case '-':
            resultado = resta(num1, num2);
            break;
        case '*':
            resultado = multiplicacion(num1, num2);
            break;
        case '/':
            resultado = division(num1, num2);
            break;
        default:
            printf("Operación no válida\n");
            return 1; // Salir con código de error
    }

    // Mostrar el resultado
    printf("El resultado de %.2f %c %.2f es: %.2f\n", num1, operacion, num2, resultado);

    return 0;
}

