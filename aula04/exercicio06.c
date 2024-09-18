#include <stdio.h>

int calcularSoma(int n){
    int soma = 0;

    for (int i = 0; i <= n; i += 2) {
        soma += i;
    }

    return soma;
}

void main() {
    int n = 0, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
    }
    else {
        soma = calcularSoma(n);
        printf("A soma dos numeros pares entre 0 e %d é: %d\n", n, soma);
    }
    
}
