#include <stdio.h>

void calcularMultiplos(int n, int x, int y) {
    int acc = 0, num = 1;

    while (acc < n) {
        if (num % x == 0 || num % y == 0) {
            printf("%d ", num);
            acc++;
        }
        num++;
    }

    printf("\n");
}
void main() {
    int n, x, y;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d %d %d", &n, &x, &y);

    if (n <= 0 || x <= 0 || y <= 0) {
        printf("Todos os numeros devem ser positivos.\n");
        
    }
    else {
        calcularMultiplos(n, x, y);

    }
}
