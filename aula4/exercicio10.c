#include <stdio.h>

int verificarPerfeito(int n) {
    int soma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma == n;
}

void main() {
    int n;

    printf("Digite um numero inteiro estritamente positivo: ");
    scanf("%d", &n);

    if (verificarPerfeito(n)) {
        printf("%d e perfeito.\n", n);

    } else {
        printf("%d nao e perfeito.\n", n);
        
    }
}
