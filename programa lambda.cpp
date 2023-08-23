#include <stdio.h>

// Definici�n de un puntero a funci�n
typedef int (*Operacion)(int, int);

// Funci�n para aplicar una operaci�n a dos valores
int aplicarOperacion(int a, int b, Operacion op) {
    return op(a, b);
}

int main() {
    // Definici�n de una funci�n "lambda" usando un puntero a funci�n
    Operacion suma = ^(int x, int y) { return x + y; };

    int resultado = aplicarOperacion(5, 3, suma);
    printf("Resultado: %d\n", resultado); // Imprimir�: Resultado: 8

    return 0;
}

