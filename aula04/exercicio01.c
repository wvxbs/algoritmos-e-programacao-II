#include <stdio.h>

int calcularSoma(int n) {
    int resultado = 0;

    for (int i = 0; i < n; i++){
        resultado += i;
    }

    return resultado;
}

void main() {
    int n, resultado = 0;

    printf("Insira o numero n: ");
    scanf("%i", &n);

    resultado = calcularSoma(n);

    printf("A soma dos n primeiros numeros de %i eh %i", n, resultado);
}