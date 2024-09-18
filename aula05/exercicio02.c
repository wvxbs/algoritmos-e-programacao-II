#include <stdio.h>

void exibirDivisores(int numero) {
    printf("Divisores de %d: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

}

void main() {
    int numero, run;
    do {
        printf("Digite um número inteiro não negativo: ");
        scanf("%d", &numero);
        if (numero >= 0) {
            exibirDivisores(numero);

        } else {
            printf("Número inválido.\n");
            return;

        }
        printf("Deseja continuar? 1 para sim, 0 para não: ");
        scanf("%d", &run);

    } while (run == 1);

}
