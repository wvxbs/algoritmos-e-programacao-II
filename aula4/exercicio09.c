#include <stdio.h>

int verificarPrimo(int p) {
    if (p <= 1) return 0;

    for (int i = 2; i * i <= p; i++) {
        if (p % i == 0) return 0;
    }

    return 1;
}

void main() {
    int p;

    printf("Digite um numero inteiro: ");
    scanf("%d", &p);

    if (verificarPrimo(p)) {
        printf("%d eh primo.\n", p);

    } else {
        printf("%d nao eh primo.\n", p);
        
    }
}
