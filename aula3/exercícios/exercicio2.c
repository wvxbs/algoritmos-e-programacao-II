#include <stdio.h>

float calcularImc (int peso, float altura) {
    return peso / (altura * altura);
}

void main () {
    int  peso = 0;
    float altura = 0.0;

    printf("Insira o peso:");
    scanf("%d", &peso);

    printf("Insira a altura:");
    scanf("%f", &altura);

    printf("O imc é: %.4f", calcularImc(peso, altura));
}