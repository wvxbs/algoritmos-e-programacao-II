#include <stdio.h>

void main() {
    int temperatura, acc = 0;

    for (int i = 0; i < 7; i++){
        printf("Insira a temperatura: ");
        scanf("%i", &temperatura);
        if (temperatura < 0) {
            acc += 1;
        }
    }

    printf("Quantidade de dias com temperatura abaixo de 0: %i", acc);
}