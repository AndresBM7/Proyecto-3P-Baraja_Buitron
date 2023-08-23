#include <stdio.h>

// Definición de un puntero a función
typedef int (*Operacion)(int, int);

// Función para aplicar una operación a dos valores
int aplicarOperacion(int a, int b, Operacion op) {
    return op(a, b);
}

int main() {
    // Definición de una función "lambda" usando un puntero a función
    Operacion suma = ^(int x, int y) { return x + y; };

    int resultado = aplicarOperacion(5, 3, suma);
    printf("Resultado: %d\n", resultado); // Imprimirá: Resultado: 8

    return 0;
}

