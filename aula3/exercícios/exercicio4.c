#include <stdio.h>
#include <math.h>

int calcularHipotenusa (int cat1, int cat2) {
    return sqrt(pow(cat1, 2) + pow(cat2, 2));
}

void main() {
    int cat1, cat2 = 0;

    printf("Insira o valor do cat1 e do cat2 em seguida");
    scanf("%f%f", &cat1, &cat2);

    printf("O valor da hipotenusa é: %d", calcularHipotenusa(cat1, cat2));
}