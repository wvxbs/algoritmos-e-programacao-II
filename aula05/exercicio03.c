#include <stdio.h>

int calcularFibonacci(int termo) {
    int anterior = 1, atual = 1, proximo;
    if (termo == 1 || termo == 2) {
        return 1;

    }
    for (int i = 3; i <= termo; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

    }
    return atual;

}

void main() {
    int termo, desejaContinuar;
    do {
        printf("Digite o número do termo desejado na sequência de Fibonacci: ");
        scanf("%d", &termo);

        if (termo >= 1) {
            printf("O %dº termo da sequência de Fibonacci é %d\n", termo, calcularFibonacci(termo));

        } else {
            printf("Número inválido.\n");
            return;

        }
        
        printf("Deseja continuar? 1 para sim, 0 para não: ");
        scanf("%d", &desejaContinuar);

    } while (desejaContinuar == 1);
}
