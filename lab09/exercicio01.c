#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;
    
    return n * fatorial(n - 1);
}

void main() {
    int fat;

    printf("Digite um número para o fatorial: ");
    scanf("%i", &fat);
    printf("A Fatorial de %i é igual a %i\n", fat, fatorial(fat));
}