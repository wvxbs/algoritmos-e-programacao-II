#include <stdio.h>

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int contarValoresDiferentes(int vetor[], int tamanho) {
    int count = 0;
    int i, j;
    int diferentes;

    for (i = 0; i < tamanho; i++) {
        diferentes = 1;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                diferentes = 0;
                break;
            }
        }
        if (diferentes) {
            count++;
        }
    }
    
    return count;
}

void main() {
    int vetor[10];
    
    preencherVetor(vetor, 10);
    
    int quantidadeDiferentes = contarValoresDiferentes(vetor, 10);
    printf("Quantidade de valores diferentes: %d\n", quantidadeDiferentes);
    
}
