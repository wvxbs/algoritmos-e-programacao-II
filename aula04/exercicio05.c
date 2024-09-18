#include <stdio.h>

float calcularMedia(int soma) {
    return soma / 4;
}

void main() {
    float faturamento[4], soma = 0;

    printf("Digite o faturamento dos sábados de outubro de 2023:\n");
    for (int i = 0; i < 4; i++) {
        printf("Faturamento do sábado %d: R$ ", i + 1);
        scanf("%f", &faturamento[i]);
        soma += faturamento[i];
    }

    float media = calcularMedia(soma);

    printf("\nA media de faturamento foi: R$ %.2f\n", media);

}
