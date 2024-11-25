#include <stdio.h>
#include <stdlib.h>
#include "validator.h"

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int getValidInteger() {
    int num;
    while (1) {
        if (scanf("%i", &num) != 1) {
            printf("Entrada inválida. Digite um número inteiro válido: ");
            clearBuffer();
        } else {
            clearBuffer();
            return num;
        }
    }
}

int getValidBinary() {
    int num;
    while (1) {
        num = getValidInteger();
        if (num == 0 || num == 1) {
            return num;
        }
        printf("Entrada inválida. Digite 0 ou 1: ");
    }
}
