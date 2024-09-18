#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

void main() {
    int numero, tentativasRestantes, desejaContinuar;
    do {
        tentativasRestantes = 3;
        while (tentativasRestantes > 0) {
            printf("Digite um número inteiro não negativo: ");
            scanf("%d", &numero);
            if (numero >= 0) {
                printf("Fatorial de %d é %d\n", numero, calcularFatorial(numero));
                break;

            } else {
                printf("Número inválido. Tente novamente.\n");
                tentativasRestantes--;

            }
        }
        if (tentativasRestantes == 0) {
            printf("Número de tentativas excedeu o limite! Tente mais tarde.\n");
            return;

        }
        printf("Deseja continuar? 1 para sim, 0 para não: ");
        scanf("%d", &desejaContinuar);

    } while (desejaContinuar == 1);

}
