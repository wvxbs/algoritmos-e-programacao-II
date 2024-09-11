#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

void main() {
    int n = 0, fatorial = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser positivo.\n");
    }
    else {
        fatorial = calcularFatorial(n);
        printf("A fatorial de %d é: %d\n", n, fatorial);
    }   
}
