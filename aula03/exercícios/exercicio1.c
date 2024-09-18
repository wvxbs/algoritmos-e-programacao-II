#include <stdio.h>

int Soma(int a, int b) {
    return a + b;
}

int Subtracao(int a, int b) {
    return a - b;
}

int Multiplicacao(int a, int b) {
    return a * b;
}

float Divisao(int a, int b) {
    return a / b;
}

void main() {
    int a;
    int b;

    printf("Insira dois inteiros: ");
    scanf("%d%d", &a, &b);

    printf("Soma de %d e %d é = %d\n", a, b, Soma(a, b));
    printf("Subtração de %d e %d é = %d\n", a, b, Subtracao(a, b));
    printf("Multiplicação de %d por %d é = %d\n", a, b, Multiplicacao(a, b));
    printf("Divisão entre %d e %d é = %2.>f\n", a, b, Divisao(a, b));
}