#include <stdio.h>

void exibirNumerosPares(int n) {
    for (int i = 0; i < n; i++){
        if (i % 2 != 0) {
            printf("%i\n", i);
        }
    }
}

void main() {
    int n, resultado = 0;

    printf("Insira o numero n: ");
    scanf("%i", &n);

    exibirNumerosPares(n);
}